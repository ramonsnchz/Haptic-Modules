# Haptic-Modules

The haptic modules are a set of five modules that represent the most commonly used haptic sensations, mainly, vibrotactile, skin-stretch, and probing haptic feedback. This repository contains the CADs, Arduino scripts, and Python scripts needed to customize the haptic modules. 

This repository contains a folder for each haptic module, containing the necessary CADs and scripts.

Before downloading any Arduino or Python code, follow this tutorial "ESP8266 and Python Communication For Noobs" and install the "ESP_MICRO.h" on your ESP8266 Esp-03.  Note: Make sure that your ESP8266 and your computer are on the same network!

Instructions on how to make the adhesive are also included in this repository. 
 
# The necessary components for each module are the following:

All modules: ESP8266 Esp-03 Wi-Fi board. A 3.3 voltage regulator (Adafruit, LM3671) which is connected to a 3.7V and 290mAh battery that powers the board. All of our batteries were from Tiny Circuit. 

Vibrotactile: Custom ERM driver comprised that uses a 2222a Transistor, and a 2k Ohm resistor. 
              ERM Motor (TOTOT Mini-Vibration Motors 10mm x 2.7mm)
              Additional 3.7V and 150mAh battery to power the ERM motor. 
              
Slider : DC  motor driver (Adafruit DRV8871)
         Polulu Low Power 100:1 micro metal gear motor with a magnetic encoder of 12 counts-per-revolution (Polulu).
         Two 3.7V and 290mAh batteries in series to power the Geared DC motor. 
         
Twister : DC  motor driver (Adafruit DRV8871)
          Polulu Low Power 100:1 micro metal gear motor with a magnetic encoder of 12 counts-per-revolution (Polulu).
          Two 3.7V and 290mAh batteries in series to power the Geared DC motor. 

Rocker :  DC  motor driver (Adafruit DRV8871)
          Polulu Low Power 100:1 micro metal gear motor with a magnetic encoder of 12 counts-per-revolution (Polulu).
          Two 3.7V and 290mAh batteries in series to power the Geared DC motor. 
      
Probing : DC  motor driver (Adafruit DRV8871)
          Voice coil actuator (Tectonic Elements TEAX19CO1-8)
          Two 3.7V and 1000mAh batteries in series to power the voice coil. 
         



If you use anything from this repository, please cite "Modular  Haptic  Feedback  for  Rapid  Prototyping  of  Tactile  Displays". 




