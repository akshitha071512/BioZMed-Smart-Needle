# Proposed system architecture

## Signal flow
Needle sensing electrode + reference electrode  
→ impedance measurement circuit  
→ ESP32 microcontroller  
→ signal analysis  
→ LED/buzzer/display alert

## Current design notes
- The exact impedance measurement circuit and its interface are not finalized.
- The needle/electrode arrangement must be tested with known electrical loads before phantom trials.
- The response associated with vessel entry or far-wall proximity is not yet established experimentally.
- Thresholds must be derived from collected data, not assumed in advance.

## Scope
Initial testing is planned with a tissue phantom only. No human-subject testing is included in the current prototype stage.
