#define Base 8
#define Source 2
#define DataIn 5

void setup() {
  pinMode(Base, OUTPUT);
  pinMode(Source, OUTPUT); //Initialize pin inputs and outputs
  pinMode(DataIn, INPUT);
  digitalWrite(Source, HIGH); //Supply current to source leg
}

void loop() {
  bool PIR; //Holds input state
  PIR = digitalRead(DataIn);
  digitalWrite(Base, PIR); //Open/closes base depending on PIR state
  delay(1000);
  digitalWrite(Base, LOW); //Reset base to low, turns off LED
}
