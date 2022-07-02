#include <avr/sleep.h>
#include <avr/interrupt.h>

#define Base 8
#define Source 2
#define DataIn 3
#define BODS 7                     //BOD Sleep bit in MCUCR
#define BODSE 2                    //BOD Sleep enable bit in MCUCR

unsigned long Timer = 0;
unsigned long TimeOn = 0;
int interval_LED = 5000;
int interval_Sleep = 15000;

void Interrupt(void);
void GoToSleep(void);

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
  delay(1000);
  TimeOn = millis() - Timer; //Time after interrupt
  if (TimeOn >= interval_LED) {
    digitalWrite(Base, LOW);
  }
  if (TimeOn >= interval_Sleep)
  GoToSleep();
}

void Interrupt() {
  digitalWrite(Base, HIGH);
  Timer = millis(); //Snapshot of timer at time of interrupt
  
  digitalWrite(LED_BUILTIN, HIGH); //Board is active
}

void GoToSleep() {
  digitalWrite(LED_BUILTIN, LOW); //Board is in sleep mode
  
  set_sleep_mode(SLEEP_MODE_STANDBY); //Selects sleep mode
  sleep_enable(); //Sets sleep enable bit

  // Disable BOD while sleeping
  uint8_t mcucr1 = MCUCR | _BV(BODS) | _BV(BODSE);
  uint8_t mcucr2 = mcucr1 & ~_BV(BODSE);
  MCUCR = mcucr1;
  MCUCR = mcucr2;

  sei(); //Enables interrupts to allow wake up
  
  sleep_cpu(); //Puts board in designated sleep mode
  sleep_disable(); //Clears sleep enable bit
}
