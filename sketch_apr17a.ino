int sleevePin = A0;
int ring2Pin = A1;
int ring1Pin = A2;
int tipPin = A3;

int led1Pin = 2;
int led2Pin = 3;
int led3Pin = 4;
int led4Pin = 5;

int sleeve, ring2, ring1, tip;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(led4Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sleeve = analogRead(sleevePin);
  ring2 = analogRead(ring2Pin);
  ring1 = analogRead(ring1Pin);
  tip = analogRead(tipPin);
  if (tip > 0) {
    digitalWrite(led1Pin, HIGH);
  } else {
    digitalWrite(led1Pin, LOW);
  }
  if (ring2 > 0) {
    digitalWrite(led2Pin, HIGH);
  } else {
    digitalWrite(led2Pin, LOW);
  }
  if (ring1 > 0) {
    digitalWrite(led3Pin, HIGH);
  } else {
    digitalWrite(led3Pin, LOW);
  }
  if (sleeve > 0) {
    digitalWrite(led4Pin, HIGH);
  } else {
    digitalWrite(led4Pin, LOW);
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
