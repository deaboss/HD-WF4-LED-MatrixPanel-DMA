// -------------------------------------------
// WF4 GPIO Configuration
// Note: WF-4 has four HUB75E connectors (75EX1..75EX4). This config targets ONLY 75EX1.
//       Control/address lines are shared; data/E are per-port.

// Status / UI (verify as needed)
#define RUN_LED_PIN       40
#define PUSH_BUTTON_PIN   11

// I2C RTC BM8563
#define BM8563_I2C_SDA    41
#define BM8563_I2C_SCL    42

// HUB75E Pins — 75EX1 (single-port use)
// Data (GPIO numbers, not package pin numbers)
#define WF4_X1_R1_PIN 2
#define WF4_X1_R2_PIN 3
#define WF4_X1_G1_PIN 6
#define WF4_X1_G2_PIN 7
#define WF4_X1_B1_PIN 10
#define WF4_X1_B2_PIN 11
#define WF4_X1_E_PIN  21

// Address/control (GPIO numbers)
#define WF4_A_PIN   39
#define WF4_B_PIN   38
#define WF4_C_PIN   37
#define WF4_D_PIN   36
#define WF4_OE_PIN  9
#define WF4_CLK_PIN 34
#define WF4_LAT_PIN 33
// USB (ESP32-S3 native)
#define WF4_USB_DM_PIN 19
#define WF4_USB_DP_PIN 20
