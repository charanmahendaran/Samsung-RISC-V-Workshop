# SAMSUNG RISC-V Workshop
#### The RISC-V Workshop, certified by Samsung and VLSI System Design under the guidance of Kunal Ghosh, is a specialized training program designed to provide hands-on experience in System-on-Chip (SoC) design and embedded systems development using the RISC-V-based VSD Squadron Mini board, culminating in an industry-recognized certification.

## Basic Details
   <b>Name : </b>Charan Mahendaran
   
   <b>Email ID : </b>charanmahendaran@gmail.com
   
   <b>College : </b>The Global Academy Of Technology
   
   <b>GitHub Profile : </b>[charanmahendaran](https://github.com/charanmahendaran)
   
   <b>LinkedIN Profile : </b>[charanmahendaran](https://www.linkedin.com/in/charanmahendaran/)
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
   
- Installing leafpad editor using the command - ```sudo snap install leafpad``` or ```sudo apt install leafpad```

### Installing RISC-V and Setting up VM in Oracle VM Box:
<p align="left"> <img src="./Task 1/VM_Box.png" width="800">

### Creating a Simple Program for finding sum of n numbers:
<p float="left">
      <img src="./Task 1/Sum_1_to_n_command.png" width="400">
      <img src="./Task 1/Sum_1_to_n_program.png" width="400">
</p>

- Creating a Simple program in leafpad editor using the command - ```leafpad sum1ton.c &```
- Compiling the program using the command - ```gcc sum1ton.c```
### Main function in RISCV64 Architecture:
<p align="left"> <img src="./Task 1/main_function_riscv.png" width="800">
   
- Compiling in RISCV Architecture using command - ```riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o mul1ton.o mul1ton.c ```

### Running program in O1 Option in RISCV64:
<p float="left">
   <img src="./Task 1/Sum1tonriscv_O1.png" width="400">
   <img src="./Task 1/main_function_riscv_O1.png" width="400">
</p>

- Opening in RISCV using Object Dump in O1 Option - ```riscv64-unknown-elf-objdump -d mul1ton.o | less ```
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
</details>

<hr>

<details>
   <summary><b> Task 3 : </b> Analyze RISC-V software documentation to decode 15 unique instructions from your application code, determine their 32-bit instruction codes and patterns, and classify them by instruction type.</summary>
   
# RISC-V Architecture: A Brief Overview
RISC-V (Reduced Instruction Set Computer - V) is an open-standard instruction set architecture (ISA) that follows the principles of reduced instruction set computing. Unlike proprietary ISAs, RISC-V is free to use without licensing fees, making it a popular choice for academic research, education, and industry applications. This open nature promotes innovation across various sectors, from hardware development to software engineering.

## Why Understanding Instruction Formats Matters
Understanding the structure of RISC-V instruction formats is vital for several reasons:

- Instruction Decoding: Enables accurate execution of instructions.
- Pipeline Design: Optimizes CPU pipeline stages for better performance.
- Compiler Design: Aids in generating efficient machine code.
- Debugging & Verification: Helps identify errors in hardware and software.
- Extensibility: Crucial for adding custom instructions in RISC-V's modular architecture.
- Instruction Types in RISC-V

### RISC-V instructions are categorized into the following types based on their field organization:

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

## Key Fields in RISC-V Instructions
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
#### Arithmetic Instructions
- ADD: Adds values in two registers.
Example: ADD rd, rs1, rs2 (rd = rs1 + rs2)
- ADDI: Adds a register and an immediate.
Example: ADDI rd, rs1, imm (rd = rs1 + imm)

#### Logical Instructions
- AND: Bitwise AND.
Example: AND rd, rs1, rs2 (rd = rs1 & rs2)
- OR: Bitwise OR.
Example: OR rd, rs1, rs2 (rd = rs1 | rs2)

#### Branch Instructions
- BEQ: Branch if equal.
Example: BEQ rs1, rs2, offset (branch if rs1 == rs2)
- BNE: Branch if not equal.
Example: BNE rs1, rs2, offset (branch if rs1 != rs2)

#### Load and Store Instructions
- LW: Load a word from memory.
Example: LW rd, offset(rs1) (rd = memory[rs1 + offset])
- SW: Store a word to memory.
Example: SW rs1, offset(rs2) (memory[rs2 + offset] = rs1)

#### Special Instructions
- AUIPC: Add upper immediate to PC (Program Counter).
Example: AUIPC rd, imm (rd = PC + imm << 12)


## RISC-V Extensions
RISC-V allows for optional extensions to provide additional functionality:
- M: Integer multiplication and division.
- A: Atomic operations.
- F, D, Q: Floating-point operations (```32-bit```, ```64-bit```, ```128-bit```).
- C: Compressed instructions.
  
## RISC-V Object Dump
<p align="left"> <img src="./Task 3/Objdump_Ofast.png" width="800">

### INSTRUCTION 1:
<p align="left"> <img src="./Task 3/Instruction_1.png" width="800">

### <b>Instruction 1 : lui a0, 0x21</b>
- Opcode: 0110111 (7 bits)
- Immediate: 0x21 (20 bits)
- Destination Register (rd): a0 (x10, 5 bits)

<b>Breakdown:</b>
- Immediate (0x21): 0000000000100001
- rd (a0 = x10): 01010
- Opcode: 0110111

Machine Code: ```0x02100037```

```
Final 32-bit Instruction Format:
| imm[31:12]       | rd    | opcode  |
| 0000000000100001 | 01010 | 0110111 |
```
Final Binary Representation:
```0000000000100001010100110111011```
____

### INSTRUCTION 2:
<p align="left"> <img src="./Task 3/Instruction_2.png" width="800">

### <b>Instruction 2: addi sp, sp, -16</b>
- Opcode: 0010011 (7 bits)
- Function (funct3): 000 (3 bits)
- Immediate: -16 (12 bits, two's complement)
- Source Register (rs1): sp (x2, 5 bits)
- Destination Register (rd): sp (x2, 5 bits)
- Function (funct3): 000 (3 bits)

<b>Breakdown:</b>
- Immediate (-16): 111111110000
- rs1 (sp = x2): 00010
- funct3: 000
- rd (sp = x2): 00010
- Opcode: 0010011

Machine Code: ```0xfff30313```

```
Final 32-bit Instruction Format:
| imm[11:0]      | rs1   | funct3 | rd    | opcode  |
| 111111110000   | 00010 | 000    | 00010 | 0010011 |
```
Final Binary Representation:
```11111111000000010000000110010011```
____

### INSTRUCTION 3:
<p align="left"> <img src="./Task 3/Instruction_3.png" width="800">

The RISC-V pseudo-instruction li a2, 120 (load immediate) is translated into a real instruction. Since 120 is a small value that fits within 12 bits, it will use the addi instruction with the x0 (zero) register as the source register. The actual instruction becomes:

### <b>Instruction 3: addi a2, x0, 120</b>
- Opcode: 0010011 (7 bits)
- Immediate: 120 (12 bits, unsigned)
- Source Register (rs1): x0 (zero, 5 bits)
- Destination Register (rd): a2 (x12, 5 bits)
- Function (funct3): 000 (3 bits)

<b>Breakdown:</b>
- Immediate (120): 000001111000
- rs1 (x0): 00000
- funct3: 000
- rd (a2 = x12): 01100
- Opcode: 0010011

Machine Code: ```0x07830313```

```
Final 32-bit Instruction Format:
| imm[11:0]      | rs1   | funct3 | rd    | opcode  |
| 000001111000   | 00000 | 000    | 01100 | 0010011 |
```
Final Binary Representation:
```0000011110000000000001100010011```
____

### INSTRUCTION 4:
<p align="left"> <img src="./Task 3/Instruction_4.png" width="800">

The RISC-V pseudo-instruction li a1, 5 (load immediate) is translated into a real instruction. Since 5 is a small value that fits within 12 bits, it will use the addi instruction with the x0 (zero) register as the source register. The actual instruction becomes:

### <b>Instruction 4: addi a1, x0, 5</b>
- Opcode: 0010011 (7 bits)
- Immediate: 5 (12 bits, unsigned)
- Source Register (rs1): x0 (zero, 5 bits)
- Destination Register (rd): a1 (x11, 5 bits)
- Function (funct3): 000 (3 bits)

<b>Breakdown:</b>
- Immediate (5): 000000000101
- rs1 (x0): 00000
- funct3: 000
- rd (a1 = x11): 01011
- Opcode: 0010011

Machine Code: ```0x00030313```

```
Final 32-bit Instruction Format:
| imm[11:0]      | rs1   | funct3 | rd    | opcode  |
| 000000000101   | 00000 | 000    | 01011 | 0010011 |
```
Final Binary Representation:
```00000000010100000000010110010011```
____

### INSTRUCTION 5:
<p align="left"> <img src="./Task 3/Instruction_5.png" width="800">

### <b>Instruction 5: addi a0, a0, 384</b>
- Opcode: 0010011 (7 bits)
- Immediate: 384 (12 bits, unsigned)
- Source Register (rs1): a0 (x10, 5 bits)
- Destination Register (rd): a0 (x10, 5 bits)
- Function (funct3): 000 (3 bits)

<b>Breakdown:</b>
- Immediate (384): 000011000000
- rs1 (a0 = x10): 01010
- funct3: 000
- rd (a0 = x10): 01010
- Opcode: 0010011

Machine Code: ```0x18030313```

```
Final 32-bit Instruction Format:
| imm[11:0]      | rs1   | funct3 | rd    | opcode  |
| 000011000000   | 01010 | 000    | 01010 | 0010011 |
```
Final Binary Representation:
```00001100000001010000010100010011```
____

### INSTRUCTION 6:
<p align="left"> <img src="./Task 3/Instruction_6.png" width="800">

### <b>Instruction 6: sd ra, 8(sp)</b>
- Opcode: 0100011 (7 bits)
- Immediate: 8 (12 bits, split as imm[11:5] and imm[4:0])
- Source Register (rs2): ra (x1, 5 bits)
- Base Register (rs1): sp (x2, 5 bits)
- Function (funct3): 011 (3 bits)

<b>Breakdown:</b>
- Immediate (8): imm[11:5] = 0000000, imm[4:0] = 01000
- rs2 (ra = x1): 00001
- rs1 (sp = x2): 00010
- funct3: 011
- Opcode: 0100011

Machine Code: ```0x00812123```

```
Final 32-bit Instruction Format:
| imm[11:5] | rs2   | rs1   | funct3 | imm[4:0] | opcode |
| 0000000   | 00001 | 00010 | 011    | 01000    | 0100011 |
```
Final Binary Representation:
```00000000100000010010001000100011```
____

### INSTRUCTION 7:
<p align="left"> <img src="./Task 3/Instruction_7.png" width="800">

### <b>Instruction 7: jal ra, 10408</b>
- Opcode: 1101111 (7 bits)
- Immediate: 10408 (20 bits, split for J-type: imm[20], imm[10:1], imm[11], imm[19:12])
- Destination Register (rd): ra (x1, 5 bits)

<b>Breakdown:</b>
- Immediate (10408): imm[20] = 0, imm[10:1] = 0000000000, imm[11] = 1, imm[19:12] = 01010001
- rd (ra = x1): 00001
- Opcode: 1101111

Machine Code: ```0x000520ff```

```
Final 32-bit Instruction Format:
| imm[20] | imm[10:1]     | imm[11] | imm[19:12]   | rd    | opcode  |
| 0       | 0000000000    | 1       | 01010001     | 00001 | 1101111 |
```
Final Binary Representation:
```000000000000000010100001000010111101111```
____

### INSTRUCTION 8:
<p align="left"> <img src="./Task 3/Instruction_8.png" width="800">

### <b>Instruction 8: ld ra, 8(sp)</b>
- Opcode: 0000011 (7 bits)
- Immediate: 8 (12 bits, unsigned)
- Source Register (rs1): sp (x2, 5 bits)
- Destination Register (rd): ra (x1, 5 bits)
- Function (funct3): 011 (3 bits)

<b>Breakdown:</b>
- Immediate (8): 000000001000
- rs1 (sp = x2): 00010
- funct3: 011
- rd (ra = x1): 00001
- Opcode: 0000011

Machine Code: ```0x00830303```

```
Final 32-bit Instruction Format:
| imm[11:0]      | rs1   | funct3 | rd    | opcode  |
| 000000001000   | 00010 | 011    | 00001 | 0000011 |
```
Final Binary Representation:
```0000000010000001000000110000011```
____

### INSTRUCTION 9:
<p align="left"> <img src="./Task 3/Instruction_9.png" width="800">

### <b>Instruction 9: li a0, 0</b>
- Opcode: 0010011 (7 bits)
- Immediate: 0 (12 bits, unsigned)
- Source Register (rs1): x0 (zero, 5 bits)
- Destination Register (rd): a0 (x10, 5 bits)
- Function (funct3): 000 (3 bits)

<b>Breakdown:</b>
- Immediate (0): 000000000000
- rs1 (x0 = x0): 00000
- funct3: 000
- rd (a0 = x10): 01010
- Opcode: 0010011

Machine Code: ```0x00030313```

```
Final 32-bit Instruction Format:
| imm[11:0]      | rs1   | funct3 | rd    | opcode  |
| 000000000000   | 00000 | 000    | 01010 | 0010011 |
```
Final Binary Representation:
```00000000000000000000010110010011```
____

### INSTRUCTION 10:
<p align="left"> <img src="./Task 3/Instruction_10.png" width="800">

### <b>Instruction 10: addi sp, sp, 16</b>
- Opcode: 0010011 (7 bits)
- Immediate: 16 (12 bits, unsigned)
- Source Register (rs1): sp (x2, 5 bits)
- Destination Register (rd): sp (x2, 5 bits)
- Function (funct3): 000 (3 bits)

<b>Breakdown:</b>
- Immediate (16): 000000001000
- rs1 (sp = x2): 00010
- funct3: 000
- rd (sp = x2): 00010
- Opcode: 0010011

Machine Code: ```0x01030313```

```
Final 32-bit Instruction Format:
| imm[11:0]      | rs1   | funct3 | rd    | opcode  |
| 000000001000   | 00010 | 000    | 00010 | 0010011 |
```
Final Binary Representation:
```00000000100000010000000110010011```
____

### INSTRUCTION 11:
<p align="left"> <img src="./Task 3/Instruction_11.png" width="800">

### <b>Instruction 11: auipc a5, 0xffff0</b>
- Opcode: 0010111 (7 bits)
- Immediate: 0xffff0 (20 bits)
- Destination Register (rd): a5 (x15, 5 bits)

<b>Breakdown:</b>
- Immediate (0xffff0): 1111111111110000
- rd (a5 = x15): 01111s
- Opcode: 0010111

Machine Code: ```0xfffff073```

```
Final 32-bit Instruction Format:
| imm[31:12]         | rd    | opcode  |
| 1111111111110000   | 01111 | 0010111 |
```
Final Binary Representation:
```11111111111100000111100101110111```
____

### INSTRUCTION 12:
<p align="left"> <img src="./Task 3/Instruction_12.png" width="800">

### <b>Instruction 12: bcqz a5, 0x100f4</b>
- Opcode: 1100011 (7 bits for `bcqz`)
- Immediate: 0x100f4 (20 bits, signed offset)
- Source Register (rs1): a5 (x15, 5 bits)
- Function (funct3): 100 (3 bits)

<b>Breakdown:</b>
- Immediate (0x100f4): 0001000000011110100
- rs1 (a5 = x15): 01111
- funct3: 100
- Opcode: 1100011

Machine Code: ```0x100f3133```

```
Final 32-bit Instruction Format:
| imm[12] | imm[10:5]  | rs1   | funct3 | imm[4:1] | imm[11] | opcode  |
| 0       | 0001000000 | 01111 | 100    | 111101   | 0       | 1100011 |
```
Final Binary Representation:
```00010000000111101111001000011011```
____

### INSTRUCTION 13:
<p align="left"> <img src="./Task 3/Instruction_13.png" width="800">

### <b>Instruction 13: addi a0, a0, 272 # 101f8 <__libc_fini_array></b>
- Opcode: 0010011 (7 bits)
- Immediate: 272 (12 bits, unsigned)
- Source Register (rs1): a0 (x10, 5 bits)
- Destination Register (rd): a0 (x10, 5 bits)
- Function (funct3): 000 (3 bits)

<b>Breakdown:</b>
- Immediate (272): 000000100010
- rs1 (a0 = x10): 01010
- funct3: 000
- rd (a0 = x10): 01010
- Opcode: 0010011

Machine Code: ```0x00012113```

```
Final 32-bit Instruction Format:
| imm[11:0]      | rs1   | funct3 | rd    | opcode  |
| 000000100010   | 01010 | 000    | 01010 | 0010011 |
```
Final Binary Representation:
```00000010001001010000000110010011```
____

### INSTRUCTION 14:
<p align="left"> <img src="./Task 3/Instruction_14.png" width="800">

### <b>Instruction 14: j 101b0 <atexit></b>
- Opcode: 1101111 (7 bits for `jal`)
- Immediate: 0x101b0 (20 bits)
- Destination Register (rd): x0 (5 bits)

<b>Breakdown:</b>
- Immediate (0x101b0): imm[20] = 0, imm[10:1] = 0000000000, imm[11] = 1, imm[19:12] = 00010000
- rd (x0 = x0): 00000
- Opcode: 1101111

Machine Code: ```0x000501ff```

```
Final 32-bit Instruction Format:
| imm[20] | imm[10:1]     | imm[11] | imm[19:12]   | rd    | opcode  |
| 0       | 0000000000    | 1       | 00010000     | 00000 | 1101111 |
```
Final Binary Representation:
```000000000000000010010000000011111101111```
____

### INSTRUCTION 15:
<p align="left"> <img src="./Task 3/Instruction_15.png" width="800">

### <b>Instruction 15</b>: lw a0, 0(sp)
- Opcode: 0000011 (7 bits)
- Immediate: 0 (12 bits, unsigned)
- Base Register (rs1): sp (x2, 5 bits)
- Destination Register (rd): a0 (x10, 5 bits)
- Function (funct3): 010 (3 bits)

<b>Breakdown:</b>
- Immediate (0): 000000000000
- rs1 (sp = x2): 00010
- funct3: 010
- rd (a0 = x10): 01010
- Opcode: 0000011

Machine Code: ```0x00030283```

```
Final 32-bit Instruction Format:
| imm[11:0]      | rs1   | funct3 | rd    | opcode  |
| 000000000000   | 00010 | 010    | 01010 | 0000011 |
```
Final Binary Representation:
```00000000000000010000100110000011```

</details>

<hr>

<details>
   <summary><b> Task 4 : </b> Simulate the design using the testbench, verify functional correctness by observing output signals, and save waveform snapshots for executed commands.</summary>
   
   ## Terminal Command:
   <p align="centre"> <img src="./Task 4/Terminal.png" width="800">
   
   ## Instruction 1:
   <p align="centre"> <img src="./Task 4/Ins_1_ADD.png" width="800">

   ## Instruction 2:
   <p align="centre"> <img src="./Task 4/Ins_2_SUB.png" width="800">

   ## Instruction 3:
   <p align="centre"> <img src="./Task 4/Ins_3_AND.png" width="800">

   ## Instruction 4:
   <p align="centre"> <img src="./Task 4/Ins_4_OR.png" width="800">

   ## Instruction 5:
   <p align="centre"> <img src="./Task 4/Ins_5_XOR.png" width="800">

   ## Instruction 6:
   <p align="centre"> <img src="./Task 4/Ins_6_SLT.png" width="800">

   ## Instruction 7:
   <p align="centre"> <img src="./Task 4/Ins_7_ADDI.png" width="800">

   ## Instruction 8:
   <p align="centre"> <img src="./Task 4/Ins_8_BEQ.png" width="800">

   ## Instruction 9:
   <p align="centre"> <img src="./Task 4/Ins_9_BNE.png" width="800">

   ## Instruction 10:
   <p align="centre"> <img src="./Task 4/Ins_10_SLL.png" width="800">
   
</details>
