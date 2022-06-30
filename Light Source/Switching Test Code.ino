#define BASEPIN 3 //Base can be opened by an I/O pin.
#define SOURCEPIN 13

void setup() {
  pinMode(BASEPIN, OUTPUT);
  pinMode(SOURCEPIN, OUTPUT);
}

void loop() {
  digitalWrite(SOURCEPIN, HIGH); //Power the BJT
  digitalWrite(BASEPIN, HIGH); //Switch BJT on
  delay(100);
  digitalWrite(BASEPIN, LOW); //Switch BJT off
  delay(100);
}
