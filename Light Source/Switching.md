# Switching

An NPN transistor is being used to control the switching on/off of the light
source. As an NPN transistor is being used low side switching is required i.e.,
the transistor will be the last step connecting the circuit to ground.
The transistor will be moved between the saturation and cut-off regions to
perform the switching.

The Arduino Leonardo being used in this project has two "power" pins, a 3.3V
pin and a 5V pin. The 5V pin will be used to power the motion sensor.
The I/O pins will be used to perform the switching i.e, powering the base/gate.
This is being done in order to keep the final 3.3V pin available to power a
battery monitoring system later in the project if it is required.
A BJT is being used to control the switching as the I/O pins
provide more than enough current to move the BJT between the
saturation and cut-off regions.

## BJT - BC377 Transistor

The specific BJT in use for this project is the BC337 NPN transistor [[BC377 Transistor](https://www.onsemi.com/pdf/datasheet/bc337-d.pdf)].
With a maximum collector current of 800 mA and maximum collector voltage of
45V this BJT is more than suited for this project as the expected current through
the collector is ~150 mA and the voltage expected is 12 V.
