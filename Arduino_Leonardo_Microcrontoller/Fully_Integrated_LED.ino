#include <avr/sleep.h>
#include <avr/power.h>
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

  digitalWrite(LED_BUILTIN, LOW);
  attachInterrupt(digitalPinToInterrupt(DataIn), Interrupt, RISING); //Enable interrupt attached to DataIn pin

  delay(1000);
  
  GoToSleep();

}

void loop() {
  delay(1000);
  TimeOn = millis() - Timer; //Time after interrupt
  if (TimeOn >= interval_LED) {
    digitalWrite(Base, LOW); //Turn off light
  }
  if (TimeOn >= interval_Sleep)
  GoToSleep();
}

void Interrupt() {
  pinMode(Source, OUTPUT);
  pinMode(Base, OUTPUT);
  digitalWrite(Source, HIGH); //Source LED
  digitalWrite(Base, HIGH); //Set emitter

  power_all_enable();
  
  Timer = millis(); //Snapshot of timer at time of interrupt
}

void GoToSleep() {
  
  set_sleep_mode(SLEEP_MODE_PWR_DOWN); //Selects sleep mode
  sleep_enable(); //Sets sleep enable bit

  ADCSRA = 0; //Disable ADC

  power_all_disable(); //Disable power reduction register

  // Disable BOD while sleeping, BOD automatically enables coming out of sleep mode
  uint8_t mcucr1 = MCUCR | _BV(BODS) | _BV(BODSE);
  uint8_t mcucr2 = mcucr1 & ~_BV(BODSE);
  MCUCR = mcucr1;
  MCUCR = mcucr2;

  sei(); //Enables interrupts to allow wake up

  for (int i = 0; i < 14; i++) { //Make all pins inputs and write low
    
    pinMode(i, INPUT);
    digitalWrite(i, LOW);
  }
  
  sleep_cpu(); //Puts board in designated sleep mode
  sleep_disable(); //Clears sleep enable bit
}
