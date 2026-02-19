#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Akhil
 * @date 2026-02-19
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

const int FSR_PIN = A0;
int sensorReading = 0;
const int PRESSURE_THRESHOLD = 500;

void setup() {
    Serial.begin(9600);
    Serial.println("FSR Force Measurement System Initialized");
}

void loop() {
    sensorReading = analogRead(FSR_PIN);

    Serial.print("Raw ADC Value: ");
    Serial.println(sensorReading);

    if (sensorReading > PRESSURE_THRESHOLD) {
        Serial.println("Pressure Detected!");
    }

    delay(500);
}
