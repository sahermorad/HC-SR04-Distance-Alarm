// HC-SR04 Distance Alarm

const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 6;
const int led = 5;

long duration;
float distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Read echo
  duration = pulseIn(echoPin, HIGH, 30000UL);

  distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // More than 30 cm
  if (duration == 0 || distance > 30) {
    noTone(buzzer);
    digitalWrite(led, LOW);
  }

  // Between 15 and 30 cm
  else if (distance > 15) {
    digitalWrite(led, LOW);

    tone(buzzer, 1000);
    delay(400);

    noTone(buzzer);
    delay(400);
  }

  // Between 5 and 15 cm
  else if (distance > 5) {
    digitalWrite(led, LOW);

    tone(buzzer, 1500);
    delay(100);

    noTone(buzzer);
    delay(100);
  }

  // 5 cm or less
  else {
    digitalWrite(led, HIGH);
    tone(buzzer, 2000);
  }
}
