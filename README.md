# IDD-Fa18-Lab1: Blink!

**A lab report by Chris Brownell**

## Part A. Set Up a Breadboard

![Breadboard](https://github.com/chrisbrownell/IDD-Fa18-Lab1-ckb77/blob/master/BreadboardSetup.JPG)


## Part B. Manually Blink a LED

**a. What color stripes are on a 220 Ohm resistor?**

Our resistors are Red - Red - Black - Black which looks like 2 - 2 - 0 (multiplier = 1). 

But as it's defined in the slides, we'd expect 220 ohms to be Red - Red - Brown which would connote 2 - 2 (multiplier = 10).
 
**b. What do you have to do to light your LED?**

Press and hold the button. See picture.

![ButtonHold](https://github.com/chrisbrownell/IDD-Fa18-Lab1-ckb77/blob/master/ButtonHold.JPG)

## Part C. Blink a LED using Arduino

### 1. Blink the on-board LED

**a. What line(s) of code do you need to change to make the LED blink (like, at all)?**

digitalWrite(LED_BUILTIN, HIGH);

**b. What line(s) of code do you need to change to change the rate of blinking?**

delay(1000);  

**c. What circuit element would you want to add to protect the board and external LED?**

????
 
**d. At what delay can you no longer *perceive* the LED blinking? How can you prove to yourself that it is, in fact, still blinking?**

At 12 ms I can no longer perceive the blinking. However if I log "On" and "Off" via serial and then check the serial monitor (see code and picture below), I can tell that it is still blinking.

![monitor](https://github.com/chrisbrownell/IDD-Fa18-Lab1-ckb77/blob/master/Screen%20Shot%202018-08-31%20at%202.21.08%20PM.png)

**e. Modify the code to make your LED blink your way. Save your new blink code to your lab 1 repository, with a link on the README.md.**

https://github.com/chrisbrownell/IDD-Fa18-Lab1-ckb77/Lab1-Blink-Dice-External.ino
    


### 2. Blink your LED

**Make a video of your LED blinking, and add it to your lab submission.**

https://drive.google.com/file/d/1ob3-plXBwA4QpNZY6DX04zCmPTjPvqUF/view?usp=sharing


## Part D. Manually fade an LED

**a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?**

While I cannot visibly discern whether I am using the full range of the potentiometer, theoretically I should not be 
able to use the whole range because the 220 ohm resistor in the circuit is necessary to prevent disaster (where R = 0). 
The presence of this resistor means that I cannot use the full range of the potentiometer.

## Part E. Fade an LED using Arduino

**a. What do you have to modify to make the code control the circuit you've built on your breadboard?**

**b. What is analogWrite()? How is that different than digitalWrite()?**


## Part F. FRANKENLIGHT!!!

### 1. Take apart your electronic device, and draw a schematic of what is inside. 

**a. Is there computation in your device? Where is it? What do you think is happening inside the "computer?"**

**b. Are there sensors on your device? How do they work? How is the sensed information conveyed to other portions of the device?**

**c. How is the device powered? Is there any transformation or regulation of the power? How is that done? What voltages are used throughout the system?**

**d. Is information stored in your device? Where? How?**

### 2. Using your schematic, figure out where a good point would be to hijack your device and implant an LED.

**Describe what you did here.**

### 3. Build your light!

**Make a video showing off your Frankenlight.**

**Include any schematics or photos in your lab write-up.**
