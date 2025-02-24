#include "ch32v003fun.h"
#include "ch32v003_GPIO.h"
#include "ch32v003_delay.h"

// Define GPIO pins
#define BUTTON_1 GPIO_Pin_1  // PA1
#define BUTTON_2 GPIO_Pin_2  // PA2
#define BUTTON_3 GPIO_Pin_4  // PC4
#define SOLENOID_PIN GPIO_Pin_6  // PD6 (Controls TIP122)

// Correct sequence of button presses
int sequence[] = {1, 2, 3};
int current_position = 0;  // Tracks progress in the combination

// Function to read which button is pressed
int read_button() {
 if (GPIO_ReadInputDataBit(GPIOA, BUTTON_1) == 0) return 1;
 if (GPIO_ReadInputDataBit(GPIOA, BUTTON_2) == 0) return 2;
 if (GPIO_ReadInputDataBit(GPIOC, BUTTON_3) == 0) return 3;
 return 0;  // No button pressed
}

// Function to check the button sequence
void check_sequence(int pressed_button) {
 if (pressed_button == sequence[current_position]) {
     current_position++;  // Move to the next step in sequence
     if (current_position == 3) {  // If all three are correct
         unlock_solenoid();
         current_position = 0;  // Reset sequence
     }
 } else {
     current_position = 0;  // Reset if incorrect button is pressed
 }
}

// Function to unlock the solenoid lock
void unlock_solenoid() {
 GPIO_SetBits(GPIOD, SOLENOID_PIN);  // Turn on solenoid
 delay_ms(5000);  // Keep unlocked for 5 seconds
 GPIO_ResetBits(GPIOD, SOLENOID_PIN);  // Lock again
}

// Main function
int main() {
 SystemInit();

 // Configure GPIO Pins
 GPIO_InitTypeDef GPIO_InitStructure;

 // Configure buttons as input (PA1, PA2, PC4)
 GPIO_InitStructure.GPIO_Pin = BUTTON_1 | BUTTON_2;
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;  // Input with pull-up resistor
 GPIO_Init(GPIOA, &GPIO_InitStructure);

 GPIO_InitStructure.GPIO_Pin = BUTTON_3;
 GPIO_Init(GPIOC, &GPIO_InitStructure);

 // Configure solenoid control pin as output (PD6)
 GPIO_InitStructure.GPIO_Pin = SOLENOID_PIN;
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;  // Output push-pull
 GPIO_Init(GPIOD, &GPIO_InitStructure);
 
 GPIO_ResetBits(GPIOD, SOLENOID_PIN);  // Ensure solenoid is OFF initially

 while (1) {
     int pressed_button = read_button();  // Read button press
     if (pressed_button > 0) {
         check_sequence(pressed_button);  // Process the sequence
         delay_ms(300);  // Debounce delay
     }
 }
}
