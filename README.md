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

A resistor
 
**d. At what delay can you no longer *perceive* the LED blinking? How can you prove to yourself that it is, in fact, still blinking?**

At 12 ms I can no longer perceive the blinking. However if I log "On" and "Off" via serial and then check the serial monitor (see code and picture below), I can tell that it is still blinking.

```
// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("On");              // log the "On" action
  delay(12);                       // wait for 12ms
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("Off");             // log the "Off" action
  delay(12);                       // wait for 12ms
}
```

![monitor](https://github.com/chrisbrownell/IDD-Fa18-Lab1-ckb77/blob/master/Screen%20Shot%202018-08-31%20at%202.21.08%20PM.png)

**e. Modify the code to make your LED blink your way. Save your new blink code to your lab 1 repository, with a link on the README.md.**

For this part, I made a 6-sided die than rolls over and over again, in LED form. When the die is "rolling", the LED is on 
for several seconds. Once a result N is rolled, the led blinks N number of times, then begins a new roll. 

[LED Die Roll Arduino Sketch](https://github.com/chrisbrownell/IDD-Fa18-Lab1-ckb77/Lab1-Blink-Dice-External.ino)
    


### 2. Blink your LED

**Make a video of your LED blinking, and add it to your lab submission.**

[Video of LED Die Roll](https://drive.google.com/file/d/1ob3-plXBwA4QpNZY6DX04zCmPTjPvqUF/view?usp=sharing)


## Part D. Manually fade an LED

**a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?**

While I cannot visibly discern whether I am using the full range of the potentiometer, theoretically I should not be 
able to use the whole range because the 220 ohm resistor in the circuit is necessary to prevent disaster (where R = 0). 
The presence of this resistor means that I cannot use the full range of the potentiometer.

[Video of Potentiometer Setup](https://drive.google.com/file/d/1hDM7mewvKbYr2JTutsssGC4XCfeKRev8/view?usp=sharing)

## Part E. Fade an LED using Arduino

**a. What do you have to modify to make the code control the circuit you've built on your breadboard?**

Need to update the PWM pin in the initialization of variable 'led' from pin 9 (in the sample code) to pin 11 (for my board). 

[Video of Arduino Fade](https://drive.google.com/file/d/1Zek9LX1zMchV1ZmMnk8DGn4SOnAFupx3/view?usp=sharing)

**b. What is analogWrite()? How is that different than digitalWrite()?**

analogWrite is a function that allows us to write analog output via a digital signal by rapidly flipping the singal 
on and off over time. The function supports a duty cycle from 0 (signal on 0% of time) to 255 (signal on 100% of time). 
 
digitalWrite only supports binary on/off (HIGH/LOW) signal, but the analogWrite uses the same underlying technology
to approximate a broader range of "values" coming out of a PWM pin.

## Part F. FRANKENLIGHT!!!

### 1. Take apart your electronic device, and draw a schematic of what is inside. 

![schematic](https://github.com/chrisbrownell/IDD-Fa18-Lab1-ckb77/blob/master/IMG_1362.JPG)

![schematic](https://github.com/chrisbrownell/IDD-Fa18-Lab1-ckb77/blob/master/IMG_1361.JPG)

**a. Is there computation in your device? Where is it? What do you think is happening inside the "computer?"**

No computation.

**b. Are there sensors on your device? How do they work? How is the sensed information conveyed to other portions of the device?**

The one sensor is a simple switch which powers the motor and LED from the battery.

**c. How is the device powered? Is there any transformation or regulation of the power? How is that done? What voltages are used throughout the system?**

3 AA batteries in series, 4.5 V total.

**d. Is information stored in your device? Where? How?**

No information storage.

### 2. Using your schematic, figure out where a good point would be to hijack your device and implant an LED.

There is already an LED in this device.

**Describe what you did here.**

### 3. Build your light!

As of class on 9/4, I was not able to get this light working. Will update later today.

**Make a video showing off your Frankenlight.**

Will update later on 9/4.

**Include any schematics or photos in your lab write-up.**
