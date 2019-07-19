#ifndef _config_h
#define _config_h

#include <Ticker.h>

extern char mqtt_server[];
extern char mqtt_port[];
extern char mqtt_user[];
extern char mqtt_password[];
extern char mqtt_state_topic[];
extern char mqtt_set_topic[];
extern char mqtt_device[];
extern char mqtt_payload_on[];
extern char mqtt_payload_off[];

// Pins
// D1
//#define CONFIG_PIN_RED 5
#define CONFIG_PIN_RED 4
// D2
//#define CONFIG_PIN_GREEN 4
#define CONFIG_PIN_GREEN 5
// D3 is the flash button on the ESP-12E/NodeMCU board
// D4 is the onboard LED
// D5
#define CONFIG_PIN_BLUE 14
// D6
#define CONFIG_PIN_WHITE 12

// This is used to flash and report status.
// #define CONFIG_PIN_STATUS BUILTIN_LED
// D7
#define CONFIG_PIN_STATUS 13

extern Ticker ticker;
extern void tick();

// Miscellaneous
// Default number of flashes if no value was given
#define CONFIG_DEFAULT_FLASH_LENGTH 2
// Number of seconds for one transition in colorfade mode
#define CONFIG_COLORFADE_TIME_SLOW 30
#define CONFIG_COLORFADE_TIME_FAST 3

// Reverse the LED logic
// false: 0 (off) - 255 (bright)
// true: 255 (off) - 0 (bright)
#define CONFIG_INVERT_LED_LOGIC false

// Enables Serial and print statements
#define CONFIG_DEBUG true

// Allow updates to firmware via wifi
#define ENABLE_OTA true
#define OTA_PORT 8266
#define OTA_PASSWORD "kp6605674"

#endif esp_buttons_config_h

