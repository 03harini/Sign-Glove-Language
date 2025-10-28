#include <LiquidCrystal_I2C.h>

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 (or 0x3F for some displays) and specify a 16x2 display
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Replace 0x27 with the detected address

void setup() {
  // Initialize the LCD with specified columns and rows
  lcd.begin(16, 2);
  
  // Turn on the backlight
  lcd.backlight();

  // Display a message on the LCD
  lcd.setCursor(0, 0); // Set cursor to column 0, row 0
  lcd.print("Hello, Arduino!");

  lcd.setCursor(0, 1); // Move to the second row
  lcd.print("LCD Display Test");
}

void loop() {
  // No need to do anything in the loop for this example
}