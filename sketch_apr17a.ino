int sleevePin = A0;
int ring2Pin = A1;
int ring1Pin = A2;
int tipPin = A3;

int ledPin = 2;

int sleeve, ring2, ring1, tip;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sleeve = analogRead(sleevePin);
  ring2 = analogRead(ring2Pin);
  ring1 = analogRead(ring1Pin);
  tip = analogRead(tipPin);
  if (tip > 0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  Serial.print("sleeve: ");
  Serial.print(sleeve);
  Serial.print(" ring2: ");
  Serial.print(ring2);
  Serial.print(" ring1: ");
  Serial.print(ring1);
  Serial.print(" tip: ");
  Serial.print(tip);
  Serial.println();
}
