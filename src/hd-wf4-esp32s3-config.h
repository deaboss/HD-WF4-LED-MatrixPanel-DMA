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
// Data
#define WF4_X1_R1_PIN 7
#define WF4_X1_R2_PIN 8
#define WF4_X1_G1_PIN 11
#define WF4_X1_G2_PIN 12
#define WF4_X1_B1_PIN 15
#define WF4_X1_B2_PIN 16
// Row address E (set to -1 if panel is 1/16-scan; fill in actual GPIO if 1/32)
#define WF4_X1_E_PIN  27

// Shared address/control (assumed WF1/WF2-compatible; verify with scope)
#define WF4_A_PIN   44
#define WF4_B_PIN   43
#define WF4_C_PIN   42
#define WF4_D_PIN   41
#define WF4_OE_PIN  14
#define WF4_CLK_PIN 39
#define WF4_LAT_PIN 38

// USB (ESP32-S3 native)
#define WF4_USB_DM_PIN 19
#define WF4_USB_DP_PIN 20
