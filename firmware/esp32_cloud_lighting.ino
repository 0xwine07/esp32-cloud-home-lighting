#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID   "My_BLYNK_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "My_BLYNK_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN    "My_BLYNK_AUTH_TOKEN"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// WiFi credentials
char ssid[] = "My_WiFi_ssid";
char pass[] = "My_Wifi_password";

// Relay control pin (D26 / GPIO26)
#define RELAY_PIN 26

// This function runs whenever the Switch widget (V0) changes
BLYNK_WRITE(V0)
{
  int relayState = param.asInt();   // 0 or 1 from Blynk

  if (relayState)
  {
    // Relay ON (active LOW) → bulb ON (COM–NO)
    digitalWrite(RELAY_PIN, LOW);
  }
  else
  {
    // Relay OFF → bulb OFF
    digitalWrite(RELAY_PIN, HIGH);
  }
}

// Sync relay state when device reconnects
BLYNK_CONNECTED()
{
  Blynk.syncVirtual(V0);
}

void setup()
{
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);

  // Safe default: relay OFF at boot → bulb OFF
  digitalWrite(RELAY_PIN, HIGH);

  // Connect to Blynk Cloud
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}
