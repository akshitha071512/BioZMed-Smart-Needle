# BioZMed – Bioimpedance-Enabled Needle for Safer Venipuncture

## Project overview
BioZMed explores whether bioimpedance measurements can provide useful information about needle position during simulated venipuncture. The planned prototype will be tested on a tissue phantom, not on human subjects.

## Current status
**Stage: early development / pre-hardware integration**

- [x] Project concept and initial architecture documented
- [x] ESP32 firmware scaffold prepared
- [ ] ESP32 board received and basic firmware tested
- [ ] Impedance measurement circuit selected and integrated
- [ ] Electrode arrangement tested
- [ ] Tissue phantom constructed
- [ ] Real impedance data collected
- [ ] Alert thresholds established from experimental data
- [ ] Repeated phantom trials completed

Items not checked are not yet complete. The current firmware scaffold does not measure impedance and does not represent a validated sensing system.

## Proposed architecture
Needle sensing electrode + reference electrode  
→ impedance measurement circuit  
→ ESP32  
→ signal processing  
→ visual/audio alert

The exact circuit and data interface must be confirmed before implementing sensor acquisition.

## Repository structure
- `firmware/BioZMed_ESP32.ino` — initial ESP32 serial/firmware scaffold
- `firmware/README.md` — firmware setup notes
- `docs/system_architecture.md` — proposed system architecture
- `docs/testing_plan.md` — staged testing plan
- `CHANGELOG.md` — project changes

## Getting started
1. Install the Arduino IDE.
2. Install the ESP32 board package using Espressif's official Arduino-ESP32 instructions.
3. Connect the ESP32 board by USB when it arrives.
4. Select the correct ESP32 board and serial port in the IDE.
5. Open `firmware/BioZMed_ESP32.ino`, upload it, and open Serial Monitor at **115200 baud**.
6. Confirm that the startup message appears. This verifies only basic firmware/serial operation—not bioimpedance sensing.

## Safety and scope
This is a student proof-of-concept project. Test only with electrical test loads and a tissue phantom. Do not connect a prototype circuit to a person. Any future human testing would require appropriate institutional, ethical, electrical-safety, and regulatory review.

## Team
Team BioZMed — Department of Biotechnology, Rathinam Technical Campus.
