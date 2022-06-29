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

**Add singular battery pack here**
