# SAMSUNG RISC-V Workshop
#### The RISC-V Workshop, certified by Samsung and VLSI System Design under the guidance of Kunal Ghosh, is a specialized training program designed to provide hands-on experience in System-on-Chip (SoC) design and embedded systems development using the RISC-V-based VSD Squadron Mini board, culminating in an industry-recognized certification.

## Basic Details
   <b>Name : </b>Charan Mahendaran
   
   <b>Email ID : </b>charanmahendaran@gmail.com
   
   <b>College : </b>The Global Academy Of Technology
   
   <b>GitHub Profile : </b>charanmahendaran
   
   <b>LinkedIN Profile : </b>charanmahendaran
<hr>


<details>
<summary><b> VSDSquadron Mini RISC-V Development Board </b></summary> 
   
### 1. Overview
<p align="centre"> <img src="./Images/Vsd.png" width="800">

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
  
<p align="centre"> <img src="./Images/Vsd_Power_supply.png" widh="800">
   
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
 
   <p float="centre">
       <img src="./Images/Step1.png" width="525">
       <img src="./Images/Step2.png" width="250" height="375">
       <img src="./Images/Step3.png" width="775">
       <img src="./Images/Step4.png" width="775">
       <img src="./Images/Step5.png" width="775">
   </p>  

* #### Completion
   *   After completing the installation, verify its accuracy by ensuring the following window appears as expected.

<p align="centre"> <img src="./Images/Complete_1.png" width="800">
<p align="centre"> <img src="./Images/Complete_2.png" width="800">

### 5. Handling and Usage
   * ESD Precautions: Handle with care to avoid static damage.
   * Operating Temperature: Designed for room temperature, ```20-35°C```.
   * Powering Up: Use ```USB-C``` connection for power and programming.
</details>

<hr>

<details>
   <summary><b> Lab Session 1 : </b>Understood the basics of RISC-V and Openlane</summary>
   
<p align="centre"> <img src="./Lab Session/Lab Session 1/Openlane.png" width="800">
</details>

<hr>

<details>
   <summary><b> Task 1 : </b>Install the RISC-V toolchain using the provided VDI link by setting up a Virtual Machine in Oracle VM VirtualBox. Convert C programs to RISC-V architecture seamlessly within this environment</summary>

### Installing RISC-V and Setting up VM in Oracle VM Box:
<p align="left"> <img src="./Task 1/VM_Box.png" width="800">

### Creating a Simple Program for finding sum of n numbers:
<p float="left">
      <img src="./Task 1/Sum_1_to_n_command.png" width="400">
      <img src="./Task 1/Sum_1_to_n_program.png" width="400">
</p>

### Main function in RISCV64 Architecture:
<p align="left"> <img src="./Task 1/main_function_riscv.png" width="800">

### Running program in O1 Option in RISCV64:
<p float="left">
   <img src="./Task 1/Sum1tonriscv_O1.png" width="400">
   <img src="./Task 1/main_function_riscv_O1.png" width="400">
</p>
</details>

<hr>

<details>
   <summary><b> Task 2 : </b>Observe performance differences in the SPIKE simulation under -O1 and -Ofast compiler optimization flags by compiling a basic C program using RISC-V GCC and collecting object dumps.</summary>

### Simple C Program to find product of n numbers:
<p align="left"> <img src="./Task 2/Mul1ton.png" width="800">

### Main function in -O1 Option in RISCV64:
<p align="left"> <img src="./Task 2/Mul1ton_O1_main.png" width="800">
   
### Debugging -O1 in SPIKE:
<p align="left"> <img src="./Task 2/Mul1ton_O1_debug_spike.png" width="800">

### Main function in -Ofast Option in RISCV64:
<p align="left"> <img src="./Task 2/Mul1ton_Ofast_main.png" width="800">

### Debugging -Ofast in SPIKE:
<p align="left"> <img src="./Task 2/Mul1ton_Ofast_debug_spike.png" width="800">
</p>
</details>

<hr>

<details>
   <summary><b> Task 3 : </b> Analyze RISC-V software documentation to decode 15 unique instructions from your application code, determine their 32-bit instruction codes and patterns, and classify them by instruction type.</summary>
   
## RISC-V Architecture: A Brief Overview
RISC-V (Reduced Instruction Set Computer - V) is an open-standard instruction set architecture (ISA) that follows the principles of reduced instruction set computing. Unlike proprietary ISAs, RISC-V is free to use without licensing fees, making it a popular choice for academic research, education, and industry applications. This open nature promotes innovation across various sectors, from hardware development to software engineering.

### Why Understanding Instruction Formats Matters
Understanding the structure of RISC-V instruction formats is vital for several reasons:

- Instruction Decoding: Enables accurate execution of instructions.
- Pipeline Design: Optimizes CPU pipeline stages for better performance.
- Compiler Design: Aids in generating efficient machine code.
- Debugging & Verification: Helps identify errors in hardware and software.
- Extensibility: Crucial for adding custom instructions in RISC-V's modular architecture.
- Instruction Types in RISC-V

#### RISC-V instructions are categorized into the following types based on their field organization:

#### 1. R-Type (Register-Register):
   - Operations: Arithmetic and logical operations between registers.
   - Example: ADD rd, rs1, rs2 (rd = rs1 + rs2)
      
#### 2. I-Type (Immediate):
   - Operations: Arithmetic operations using a register and an immediate value.
   - Example: ADDI rd, rs1, imm (rd = rs1 + imm)
     
#### 3. S-Type (Store):
   - Operations: Storing data from a register to memory.
   - Example: SW rs1, imm(rs2) (memory[rs2 + imm] = rs1)
     
#### 4. B-Type (Branch):
   - Operations: Conditional branching based on register values.
   - Example: BEQ rs1, rs2, offset (branch if rs1 == rs2)

#### 5. U-Type (Upper Immediate):
   - Operations: Instructions that use large immediate values.
   - Example: LUI rd, imm (load upper immediate into rd)

#### 6. J-Type (Jump):
   - Operations: Unconditional jumps to a specified address.
   - Example: JAL rd, imm (jump and link)

### Key Fields in RISC-V Instructions
Each instruction in RISC-V has several key fields that define its functionality:
- Opcode: Specifies the operation type.
- Function Fields (funct3, funct7): Define the specific operation within an instruction type.
- Immediate Values: Represent constants used in computations.
- Registers: Indicate source and destination registers for data operations.
- Example: LUI (Load Upper Immediate)
- For an instruction like:
   * ```lui x5, 0x12345```
   * Encoding: The immediate value ```0x12345``` is loaded into the upper 20 bits of register ```x5```.
   * Execution: The instruction loads the value into the upper 20 bits of ```x5```, while the lower bits are set to zero.
  
## Instruction Categories
### Arithmetic Instructions
- ADD: Adds values in two registers.
Example: ADD rd, rs1, rs2 (rd = rs1 + rs2)
- ADDI: Adds a register and an immediate.
Example: ADDI rd, rs1, imm (rd = rs1 + imm)

### Logical Instructions
- AND: Bitwise AND.
Example: AND rd, rs1, rs2 (rd = rs1 & rs2)

### OR: Bitwise OR.
- Example: OR rd, rs1, rs2 (rd = rs1 | rs2)

### Branch Instructions
- BEQ: Branch if equal.
Example: BEQ rs1, rs2, offset (branch if rs1 == rs2)
- BNE: Branch if not equal.
Example: BNE rs1, rs2, offset (branch if rs1 != rs2)

### Load and Store Instructions
- LW: Load a word from memory.
Example: LW rd, offset(rs1) (rd = memory[rs1 + offset])
- SW: Store a word to memory.
Example: SW rs1, offset(rs2) (memory[rs2 + offset] = rs1)

### Special Instructions
- AUIPC: Add upper immediate to PC (Program Counter).
Example: AUIPC rd, imm (rd = PC + imm << 12)


## RISC-V Extensions
RISC-V allows for optional extensions to provide additional functionality:
- M: Integer multiplication and division.
- A: Atomic operations.
- F, D, Q: Floating-point operations (32-bit, 64-bit, 128-bit).
- C: Compressed instructions.

</p>
</details>
