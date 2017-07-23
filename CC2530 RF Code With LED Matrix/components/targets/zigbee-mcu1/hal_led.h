//-------------------------------------------------------------------
// Filename: hal_led.h
// Description: zigbee-mcu1 led library header file
//-------------------------------------------------------------------
//-------------------------------------------------------------------
// GLOBAL FUNCTIONS
//-------------------------------------------------------------------
void halLedSet(uint8 led_id);
void halLedClear(uint8 led_id);
void halLedToggle(uint8 led_id);
void halLedSetPort(uint8 port);