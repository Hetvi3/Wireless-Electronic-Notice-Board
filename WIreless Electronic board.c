#include <AsyncPrinter.h>
#include <DebugPrintMacros.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncTCPbuffer.h>
#include <SyncClient.h>
#include <async_config.h>
#include <tcp_axtls.h>
#include <ArduinoWiFiServer.h>
#include <BearSSLHelpers.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiGratuitous.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureBearSSL.h>
#include <WiFiServer.h>
#include <WiFiServerSecure.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiUdp.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// #include <WiFi.h>
// #include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
//C00reates an instance of an AsyncWebServer object
named server that listens for incoming HTTP requests
onport 80
AsyncWebServer server(80);
//Enter WiFi Credentials
//const char* ssid = "OnePlus Nord CE 3 Lite 5G"; //wifi
ssid
const char* ssid = "hp pavilion";
//const char* password = "i2wuypvu"; //wifi password
const char* password = "sfrf36594";
const char* PARAM_INPUT_1 = "input1";
const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML>
<html>
<head>
<title>Smart Notice Board</title>
<meta name="viewport" content="width=device-
width,initial-scale=1">
<style
>
body
{
background-color: #f0f8ff; /* Light blue background
*/