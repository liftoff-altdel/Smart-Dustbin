#include <ESP32Servo.h>

#define TRIG 5
#define ECHO 18
#define SERVO_PIN 13

Servo lid;

float getDistance() {
  long duration;
  
  // trigger pulse
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH, 30000);

  if (duration == 0) return -1;  // no echo

  return duration * 0.034 / 2;
}

void setup() {
  Serial.begin(115200);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  lid.attach(SERVO_PIN, 500, 2400);
  lid.write(0);   // closed

  Serial.println("Smart Dustbin Ready");
}

void loop() {

  float d = getDistance();

  Serial.print("Distance: ");
  Serial.println(d);

  // valid detection
  if (d > 2 && d < 15) {

    Serial.println("Opening Lid...");
    lid.write(90);   // open

    delay(4000);     // keep open

    Serial.println("Closing Lid...");
    lid.write(0);    // close

    delay(3000);     // delay to avoid re-trigger
  }

  delay(300);
}
