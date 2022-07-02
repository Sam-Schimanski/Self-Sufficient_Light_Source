//Warning: This script will only put the board into standby mode.
//To bring the board out of standby mode an interrupt or similar
//must be tied to the script. Otherwise the board will need to be
//reset. This can be done by pressing the built in reset button
//twice during the uploading stage of a new script. Alternatively
//this can be done by connecting the RESET pin and GND twice in
//quick succession.


#include <avr/sleep.h>
#include <avr/interrupt.h>

#define BODS 7                     //BOD Sleep bit in MCUCR
#define BODSE 2                    //BOD Sleep enable bit in MCUCR

void GoToSleep(void);

void setup() {
  GoToSleep();
}

void loop()
{
  
}


void GoToSleep() {
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
