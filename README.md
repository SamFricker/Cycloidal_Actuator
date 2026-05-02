# Custom BLDC Cycloidal Actuator

A fully custom-designed **quasi-direct drive actuator** combining a custom BLDC motor with an internal cycloidal gearbox.

## CAD Design
!(CAD)

## Goals
- Learn electromagnetism and motor design
- Build a low-cost actuator alternative
- Use in robotics (quadrupeds, joints)
- Gain further CAD experience (Fusion 360)

## Key Specs
- ~32 pole BLDC motor
- N52 magnets
- Internal cycloidal gearbox (~10:1)
- Magnetic encoder (top-mounted)
- Arduino controlled
- Custom 3D printed bearings

## Architecture
- Outer rotor with embedded magnets
- Inner laminated stator with windings
- Cycloidal reduction integrated inside housing

## Status
- CAD complete
- Cycloidal functional
- Electronics ready
- Motor winding pending

## Engineering Challenges
- Heat dissipation (plastic limits)
- Winding quality and balance
- Bearing wear (printed races)
- Structural rigidity

## Future Improvements
- Metal housing
- Better bearings
- FOC control
- Thermal monitoring