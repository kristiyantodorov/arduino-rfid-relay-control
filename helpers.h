void blink(uint8_t pin_number, uint8_t number_of_blinks, int delay_ms = 100);
void toggle(uint8_t pin_number, bool state);
void blink_success(uint8_t pin_number);
void blink_error(uint8_t pin_number);
void relay_on(uint8_t pin_number, bool state);