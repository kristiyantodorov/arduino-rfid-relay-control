#include "helpers.h"

void blink(uint8_t pin_number, uint8_t number_of_blinks, int delay_ms = 100) {
  static uint8_t i;
  for (i = 0; i < number_of_blinks; i++) {
    digitalWrite(pin_number, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(delay_ms);                       // wait for a second
    digitalWrite(pin_number, LOW);    // turn the LED off by making the voltage LOW
    delay(delay_ms);                       // wait for a second
  }
}

void blink_success(uint8_t pin_number) {
  blink(pin_number, 3, 100);
}

void blink_error(uint8_t pin_number) {
  blink(pin_number, 2, 500);
}

void toggle(uint8_t pin_number, bool state) {
  if (state)
    digitalWrite(pin_number, HIGH);
  else
    digitalWrite(pin_number, LOW);
}

void relay_toggle(uint8_t pin_number, bool state) {
  if ( state )
    digitalWrite(pin_number, HIGH);
  else
    digitalWrite(pin_number, LOW);
}