# RISC-V Workshop
#### The RISC-V Workshop, certified by Samsung and VLSI System Design under the guidance of Kunal Ghosh, is a specialized training program designed to provide hands-on experience in System-on-Chip (SoC) design and embedded systems development using the RISC-V-based VSD Squadron Mini board, culminating in an industry-recognized certification.
<hr>


<details>
<summary><b> VSDSquadron Mini RISC-V Development Board </b></summary> 
   
### 1. Overview
<p align="centre"> <img src="./Images/Vsd.png">

* #### Core Processor:
    * Features the CH32V003F4U6 RISC-V chip with ```RV32EC``` instruction set.
    * Supports ```24MHz``` main clock frequency and two-level interrupt nesting.
    * High-speed memory: ```2KB SRAM```, ```16KB``` CodeFlash, and ```1920B``` for bootloader.
* #### Key Features:
    * Integrated clock system with 24MHz and 128kHz RC oscillators.
    * 15 GPIO ports, enabling extensive peripheral connections.
    * Communication interfaces: ```USART```, ```I2C```, ```SPI```.
    * Onboard programming using the ```CH32V305FBP6``` protocol.
    * Powered via USB-C connector.

### 2. Specifications

* #### Form Factor: 
    * 50 x 28 mm with a maximum height of 8mm (top) and 1mm (bottom).
  
<p align="centre"> <img src="./Images/Vsd_Power_supply.png">
   
* #### Power:
   * Nominal Input: 5V.
   * I/O Voltage: 3.3V.
   * Source/Sink Current: 8mA per I/O pin.

* #### Connectivity:
   * Digital I/O Pins: 15.
   * Analog I/O Pins: 10-bit ADC.
   * PWM Pins: 14.
   * External interrupts: 8.
* #### Other Features:
   * Built-in LED (PD6).
   * Programmer/debugger included, no external adapter required.

### 3. Kit Contents
* 1x VSDSquadron Mini Board.
* USB 2.0 Type-C connector.

### 4. Installation & Setup
To program and test the board (e.g., a "blink" example):
* #### Software:
   * Install ```VSCode``` and the ```PlatformIO``` extension.
   * Set up the ```CH32V``` platform via the repository URL provided.
   * Install the ```WCH-Link``` driver for programming.
   * USing ```Oracle Virtual Box``` to execute virtually.
* #### Steps:
   * Connect the board via USB-C.
   * Use ```PlatformIO``` in VSCode to ```build``` and ```upload``` the code.
   * Follow provided visuals and step-by-step instructions in the datasheet.
 
   <p align="centre"> <img src="./Images/Step1.png">
   <p align="centre"> <img src="./Images/Step2.png">
   <p align="centre"> <img src="./Images/Step3.png">
   <p align="centre"> <img src="./Images/Step4.png">
   <p align="centre"> <img src="./Images/Step5.png">

* #### Completion
   *   After completing the installation, verify its accuracy by ensuring the following window appears as expected.

<p align="centre"> <img src="./Images/Complete_1.png">
<p align="centre"> <img src="./Images/Complete_2.png">

### 5. Handling and Usage
   * ESD Precautions: Handle with care to avoid static damage.
   * Operating Temperature: Designed for room temperature, ```20-35°C```.
   * Powering Up: Use ```USB-C``` connection for power and programming.
</details>

<hr>

<details>
   <summary><b> Task 1 : </b>To install the RISC-V toolchain using the provided VDI link and create a Virtual Machine through Orcale VM Box.
</summary>
</details>
