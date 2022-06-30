# Charging and Discharging of the Separate Battery Packs

The battery storage for this project will consist of two battery packs. Both packs will consist of three 8.4V Ni-MH cells in series. At any one time one pack will
be charging through the turbines generated power and the other pack will be discharging through the load. The load being the Arduino and connected peripherals, e.g.,
light source and motion sensor. Switches will control the which pack is charging and discharging. A slight delay will be added to ensure a switch in enabled to power
the load before the current powering pack is switched into recharge mode. This will ensure the load always recieves the power required to perform its duties.

The state of the switches will be controlled by the Arduino's I/O pins. Methods of battery management are being explored to determine the state of charge (SoC) of the
two battery packs. This is to ensure the battery packs are switched from discharging to charaging at a suitable time to ensure the load continues to recieve power and
neither packs are drained completely. The battery management methods currently under analysis are the coulomb counting and the voltage method. A description of each
method and a conclusion on which is best for this application will be added to this repository when more is known.

![Joint Battery Packs](https://user-images.githubusercontent.com/108167199/176571609-127ee393-44c6-4e6b-bce1-d8960f0d6680.PNG)

**Figure 1**, A high level view of the charging and discharging of the individual battery packs.
