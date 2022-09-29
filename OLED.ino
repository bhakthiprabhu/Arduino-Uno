#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 4 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(OLED_RESET);
void setup() {
  Serial.begin(9600);
  //if(!display.begin("SSD1306_SWITCHCAPVCC,0x3C")
  // the library initializes this with an Adafruit splash screen.
  display.begin("SSD1306_SWITCHCAPVCC,0x3C");
  display.display();
  delay(2000); // Pause for 2 seconds
 }

void loop() { 
  
  display.clearDisplay(); //clear the buffer
  display.setTextSize(1);             // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE);        // Draw white text
  display.setCursor(0,0);             // Start at top-left corner
  display.println("Hello, world!");
  display.display();
  delay(2000);
}
