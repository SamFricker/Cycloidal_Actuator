# Wiring Guide

## System Overview
Battery → Motor Driver → Motor
Battery → Buck Converter → Arduino

## Detailed Connections

### Power
Battery (+) → Driver VIN
Battery (+) → Buck IN+
Battery (-) → Common GND

### Buck Converter
OUT → Arduino 5V
GND → Arduino GND

### Motor Driver
Phase A/B/C → Motor windings

Control:
- PWM → Arduino pin 9
- DIR → Arduino pin 8
- EN → Arduino pin 7

### Encoder
VCC → Arduino 5V
GND → GND
Signal → Arduino (I2C/SPI)

## Notes
- Common ground is critical
- Keep encoder wiring short
- Add decoupling capacitors
