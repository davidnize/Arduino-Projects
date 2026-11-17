int bit0Led = 11;
int bit1Led = 10;
int bit2Led = 9;
int bit3Led = 8;

void setup() {
  pinMode(bit0Led, OUTPUT);
  pinMode(bit1Led, OUTPUT);
  pinMode(bit2Led, OUTPUT);
  pinMode(bit3Led, OUTPUT);
}

void loop() {
  for (int number = 0; number < 16; number++) {

    digitalWrite(bit0Led, number & 1);
    digitalWrite(bit1Led, (number >> 1) & 1);
    digitalWrite(bit2Led, (number >> 2) & 1);
    digitalWrite(bit3Led, (number >> 3) & 1);

    delay(1000);

    digitalWrite(bit0Led, LOW);
    digitalWrite(bit1Led, LOW);
    digitalWrite(bit2Led, LOW);
    digitalWrite(bit3Led, LOW);

    delay(1000);
  }
}
