# Transformer Approach

Assumptions, DC-AC conversion, no losses during the transformation.

A transformer approach was considered for ramping up the input voltage to the standard light bulb. A 25.2V battery source with a peak
current output of 0.4 A was assumed for the input.
This being three of the chosen batteries in series.

The input voltage required for a standard bulb is between 230 - 240 V as per
New Zealand convension. With a required 0.5 A current draw required for a
singular bulb. Using conservation of energy the peak current for the stepped
up voltage can be found.

P<sub>1 </sub> = P<sub>2 </sub>
 
I<sub>1 </sub> $\times$ V<sub>1 </sub> = I<sub>2 </sub> $\times$ V<sub>2 </sub>

I<sub>1 </sub> = 0.4 A

V<sub>1 </sub> = 25.2 V

V<sub>2 </sub> = 230 - 240 V

Solving the conservation of energy equation above for I<sub>2 </sub> gives,

I<sub>2 </sub> = 0.042 - ~0.0438 A

This peak current output range being less than 0.5 A is not enough to power a standard
bulb.

Therefore to make the step up transformer a viable option the maximum current
draw available from the power source must be increased. This can be done by
connecting additional three celled sections of the same battery type in
parallel with the current stand alone cell section.

With the maximum current draw of the chosen batteries being 0.4 A per cell
12 parallel cell sections made of three battery cells would be required
to meet the current requirement of 0.5 A. This would require 36 individual
cells with a total cost of ~$824. This being far to expensive to meet just the power requirements of the standard bulb therefore, removing the step
up transformer as an option. Leaving the low voltage bulb as the only viable
option for this project.

![image](https://user-images.githubusercontent.com/108167199/176327226-caa70a00-c442-433b-be4c-eab8a7def9b8.png)
