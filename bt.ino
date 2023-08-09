char t;

void setup() {
  pinMode(13, OUTPUT);   // Led
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    t = Serial.read();
    Serial.println(t);

    if (t == 'F') {       // Move forward (all motors rotate in the forward direction)
      digitalWrite(13, HIGH);
      // Add code here to control other motors in the forward direction
    }

    else if (t == 'B') {  // Move reverse (all motors rotate in reverse direction)
      digitalWrite(13, LOW);
      // Add code here to control other motors in the reverse direction
    }
  }
}
