# Battery Pack

The requirements for the battery pack are that it is able to supply ~25V with a peak current of ~0.5 A.
These requirements are due to the light source having a current draw of ~0.3 A with a voltage supply required
of 12V. The Leonardo has a maximum current draw of ~0.2 A with connected peripherals and an average required
voltage supply of 9V. Therefore, a voltage supply of ~25V with a peak current of ~0.5A would be suitable for this
project.

Using the battery cell described in this folder, the Ni-MH battery, the requirements for the battery pack can be meet
as follows.

The cells to be used provide a capacity, C, of 0.2 Ah. The charge time for this battery is five hours. Therefore,
the battery cell has a discarge rate of 0.04 A [[Battery Capacity](https://www.pveducation.org/pvcdrom/battery-characteristics/battery-charging-and-discharging-parameters#:~:text=In%20this%20case%2C%20the%20discharge,%2F20%20h%20%3D%2025%20A.)]. 

The battery pack will involve three of these cells in series to provide the voltage requirements.
There will be two seperate battery packs involved in this system. One for the continual powering of the arduino and
light source when required. The other will be recharging thorugh the turbine. Therefore, two, three series celled battery packs
are to be purchased. The total number of individual cells being require for purchase will be six.

![Singular Battery Pack](https://user-images.githubusercontent.com/108167199/176364233-036c1c81-5afa-4396-b780-12e95b44bf00.PNG)

**Figure 1**, A singular battery pack, comprised of three Ni-MH cells.

**Update 1**

After further thought, the addition of three more cells in series connected in parallel with the current battery pack might be wise. As this allows twice the peak
current draw as well as twice the battery life. Although, this comes with a longer charging time this will aid in prolonging the systems up time as this extended
battery life will prevent the batteries from dying during times of lower output from the turbine. Additionally, this requires less hardware as switches will not
be required as they would have been in the seperated battery packs. Furthermore, the requirement to only monitor one battery pack and not having the need for additional
software routines would decrease the processing power required to run the system therefore, decreasing the power consumption of the processor.

![Joint Pack](https://user-images.githubusercontent.com/108167199/176575215-b7976d53-ebb5-4fd0-9b65-2021cc23ecf4.PNG)

**Figure 2**, The joint battery packs in parallel.
