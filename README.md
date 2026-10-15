# Firmware notes

`BioZMed_ESP32.ino` is an initial scaffold for checking startup and serial communication when the ESP32 arrives.

## Test procedure
1. Install Arduino IDE and the ESP32 board package.
2. Select the correct board and port.
3. Upload the sketch.
4. Open Serial Monitor at 115200 baud.
5. Confirm the startup messages and periodic status line.

## What this test proves
It only checks that the ESP32 can run the sketch and send serial messages. It does not prove that the impedance circuit works.

## Not implemented yet
- Impedance IC/circuit interface
- Sensor reading
- Signal processing
- Alert logic
- Calibration or validation
