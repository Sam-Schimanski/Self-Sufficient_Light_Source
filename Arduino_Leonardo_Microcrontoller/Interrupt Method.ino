#define Base 8
#define Source 2
#define DataIn 3
unsigned long timer = 0;
unsigned long TimeOn = 0;
int interval = 5000;
void Interrupt(void);

void setup() {
  pinMode(Base, OUTPUT);
  pinMode(Source, OUTPUT); //Initialize pin inputs and outputs
  pinMode(DataIn, INPUT);

  for (int i = 0; i < 14; i++) { //Write all pins low
    
    digitalWrite(i, LOW);
  }
  
  digitalWrite(Source, HIGH); //Supply current to source leg

  attachInterrupt(digitalPinToInterrupt(DataIn), Interrupt, RISING); //Enable interrupt attached to DataIn pin
}

void loop() {
  delay(200);
  TimeOn = millis() - timer; //Time after interrupt
  if (TimeOn >= interval) {
    digitalWrite(Base, LOW);
  }
}

void Interrupt() {
  digitalWrite(Base, HIGH);
  timer = millis(); //Snapshot of timer at time of interrupt
}
