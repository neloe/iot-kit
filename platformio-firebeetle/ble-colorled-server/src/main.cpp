#include <Arduino.h>
#include "NimBLEDevice.h"

NimBLEServer * ble_server;
NimBLEService * ble_service;
NimBLECharacteristic * ble_character;

void setup() {
  // put your setup code here, to run once:
  NimBLEDevice::init("NimBLE"); // parameter is just the device name; could be more descriptive
  ble_server = NimBLEDevice::createServer();
  ble_service = ble_server->createService("LEDColor");
  ble_character = ble_service->createCharacteristic("RGBA");

  ble_service->start();
  NimBLEAdvertising * advertising = NimBLEDevice::getAdvertising();
  advertising->addServiceUUID("RGBA");
  advertising->start();

}

void loop() {
  // put your main code here, to run repeatedly:
}