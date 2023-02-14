#include <PubSubClient.h>
#include <rpcWiFi.h>
#include <SPI.h>

#include "config.h"

void connectWiFi()
{
    while(WiFi.status() != WL_CONNECTED)
    {
        Serial.println("Connecting to WiFi..");
        WiFi.begin(SSID, PASSWORD);
        delay(500);
    }

    Serial.println("Connected!");
}