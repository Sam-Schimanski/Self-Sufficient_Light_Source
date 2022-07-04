# Boost Converter Approach

A boost converter approach is a far more suitable approach to increasing the voltage input to the light bulb.
This requires easier to source components and with the arduinos PWM pins the MOSFET switching should
not be a problem.

Based on a single 3.7 V Li-Ion cell a boost converter circuit could be designed as is in the following circuit.
At the output the voltage has stepped up to ~13.5 V more than enough for the 12V light bulb being used for this project.

![Boost Converter, Transient Response](https://user-images.githubusercontent.com/108167199/177222255-853470c1-3753-454c-ac86-dd59813bf676.PNG)
**Figure 1**, Boost converter circuit and corresponding transient respond for voltage at the output.
