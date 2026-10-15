/*
  BioZMed ESP32 firmware scaffold
  Purpose: verify ESP32 startup and serial communication.

  IMPORTANT:
  - This starter sketch does NOT measure impedance.
  - It does NOT generate fake sensor readings.
  - Sensor acquisition and alert thresholds must be added only after
    the actual impedance circuit/interface is selected and tested.
  - For laboratory phantom testing only; never connect to a person.
*/

const unsigned long STATUS_INTERVAL_MS = 2000;
unsigned long lastStatusTime = 0;

void setup() {
  Serial.begin(115200);
  delay(500);

  Serial.println();
  Serial.println("BioZMed ESP32 firmware scaffold");
  Serial.println("Status: serial communication test only");
  Serial.println("Impedance sensor: not connected / not implemented");
}

void loop() {
  const unsigned long now = millis();

  if (now - lastStatusTime >= STATUS_INTERVAL_MS) {
    lastStatusTime = now;
    Serial.println("System running. No impedance measurement available yet.");
  }

  // TODO after hardware interface is finalized:
  // 1. Initialize the impedance measurement circuit.
  // 2. Read actual sensor data and check for communication errors.
  // 3. Record timestamped readings for phantom trials.
  // 4. Establish thresholds from measured data, not guessed values.
  // 5. Add alerts only after validating the measurement behaviour.
}
