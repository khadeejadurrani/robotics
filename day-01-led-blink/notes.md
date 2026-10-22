# Day 1: First Arduino Program (LED Blink)

## What I learned
- How to connect the Arduino to the Arduino IDE using a USB cable
- How to select the board (Arduino Uno) and the port in the IDE
- The built-in LED on the Arduino is connected to **pin 13**
- How to write and upload my first program

## How the code works
- `setup()` runs **once** when the Arduino starts. I used it to set pin 13 as an output.
- `loop()` runs **again and again forever**. I used it to turn the LED on and off.
- `pinMode(13, OUTPUT);` tells pin 13 to send out power
- `digitalWrite(13, HIGH);` turns the LED **on**
- `digitalWrite(13, LOW);` turns the LED **off**
- `delay(1000);` waits **1000 milliseconds = 1 second**. Changing this number changes the gap between blinks.

## Port vs Pin
- **Port** = USB connection to the computer (selected in the IDE)
- **Pin** = connection points on the board (LED is on pin 13)

## What I tried
- Changed the delay to make the LED blink faster and slower

## What confused me
- (write anything that wasn't clear)
