# Staged testing plan

## Stage 1 — ESP32 basic test
- Upload the starter sketch.
- Confirm serial output.
- Record board model, IDE version, and test date.

## Stage 2 — Measurement circuit bench test
- Finalize the circuit and interface.
- Test with known resistive loads.
- Record expected and measured values, test frequency, and setup.
- Do not proceed if readings are unstable or the circuit is not understood.

## Stage 3 — Electrode and phantom test
- Build a tissue phantom with an embedded vessel-like tube.
- Use a sensing electrode and a fixed reference electrode.
- Record actual needle position and measured signal at each step.
- Repeat trials to check consistency.

## Stage 4 — Analysis and alert
- Analyse real measurements.
- Determine whether the signal consistently changes across positions.
- Choose alert thresholds only from measured data.
- Report false alerts and missed detections as well as successful detections.

## Safety
Use only electrical test loads and tissue phantoms. Do not connect the prototype to a person.
