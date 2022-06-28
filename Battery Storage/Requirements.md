# Battery Storage Requirements

### Component Requirements

**Ardunio Leonardo**

Operating Voltage: 7 - 12V. Noted to operate "great" on a 9V input [[Voltage Input](https://docs.arduino.cc/hardware/leonardo)].

The assumption of a 9V requirement will be set for the Leonardo from here on within the project.

**Regular Light Bulb**

Operating Voltage: 230 - 240V [[Regular Bulb](https://www.thewarehouse.co.nz/p/edapt-led-e27-classic-light-bulb-9w-cool-white-3-pack/R2733262.html?gclsrc=aw.ds&ds_rl=1268368&ds_rl=1268368&gclid=CjwKCAjwquWVBhBrEiwAt1Kmwq3uJm3-bUG1CaH1VQmBCLP7zgUt5w4C5D7ujXFbTzfOIuKQgXxl9xoCe20QAvD_BwE&gclsrc=aw.ds)]

Power Consumption: 9W

Current Draw: ~0.0375 - ~0.0391 A

**Low Voltage Light Bulb**

Operating Voltage: 12 - 24V [[Low Voltage Bulb](https://www.liquidleds.com.au/products/4-watt-12-volt-fancy-round-g45-dimmable-led-filament-light-bulb-e27?gclid=CjwKCAjwquWVBhBrEiwAt1Kmwt45sR3A0kkG7pg0l-bPMKw2y6W-FygZxoLcmJDk2elwIOLXmFRkDBoCBvUQAvD_BwE&utm_campaign=Google%20Shopping&utm_medium=cpc&utm_source=google)]

Power Consumption: 4W

Current Draw: ~0.167 - ~0.33 A

### System Requirements

**Leonardo and the Regular Bulb**

The use of a regular "store bought" bulb would be to make replacement parts easier to come by. Additionally, long-term operating costs would be lessened
as the cost of low voltage bulbs is approximately twice that of regular bulbs.

Currently, the voltage output of the battery system would not meet the requirements of the regular blub. To meet these voltage requirements there would
need to be a large expensive battery stoarge system. Due to budget constraints this would not be a viable method. Another method to meet the voltage input
requirements could be to make use of a step-up transformer.

Upon exploring a transformer approach it was found approximately a 1:16 transformer would be required based on an expected input of ~15V. This would meet the
voltage requirements of the bulb although further investigation proved unable to find a suitable step up trasnformer. The nearest found being a 1:15 transformer
although, this transformer would be unable to recieve the input voltage given by the storage system [[Toroidal Transformer](https://www.toroidal-transformer.com/shop/pro-audio/signal-transformers/378/tm3-step-up-transformer-1:15.html)].

**Leonardo and the Low Voltage Blub**

Operating voltage: 21 - 33V

With the use of a low voltage bulb the voltage and current requirements of the system can be meet without much trouble by a series of battery cells.
For this system it is assumed a 25V input would be appropriate for all system functions.

A set of rechargable 8.4 V 200 mAh batteries have been chosen to power the load [[Ni-MH Battery](https://www.jaycar.co.nz/9-volt-8-4v-200mah-ni-mh-rechargeable-battery/p/SB2467)]. This battery cell having a maximum output current of 400 mA, this being enough to drive both the Arduino and the low voltage bulb. Combined needing ~0.367 A at a maximum [[Leonardo Current Draw](https://www.microcontrollertips.com/microcontroller-power-source-considerations-arduino-faq/#:~:text=The%20maximum%20current%20draw%20of,pin%20is%2090%25%20of%20Vcc.)].
