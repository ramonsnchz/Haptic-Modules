# Haptic Modules

### Overview

The haptic modules included in this repository produce the most types of haptic sensations, namely, vibrotactile, skin-stretch, and probing haptic feedback. This repository contains the CAD files, Arduino scripts, and Python scripts needed to build and customize the haptic modules. Instructions on how to make the module adhesive are also included.

Before downloading any Arduino or Python code, please follow this tutorial [ESP8266 and Python Communication For Noobs](https://www.instructables.com/ESP8266-and-Python-Communication-ForNoobs/) and install the "ESP_MICRO.h" on your ESP8266 Esp-03.  Note: Make sure that your ESP8266 and your computer are on the same network!

More information about the modules can be found in our paper which will be published in the IEEE World Haptics Conference 2021 (link coming soon).
**If you use anything from this repository, please cite "Modular  Haptic  Feedback  for  Rapid  Prototyping  of  Tactile  Displays".**

### Materials

**All modules require the following:**
- WiFi module ([ESP8266 Esp-03](https://www.amazon.com/ESP8266-ESP-03-Wireless-Transceiver-Receive/dp/B00YHIGR62))
- 3.3 voltage regulator ([Adafruit 2745](https://www.adafruit.com/product/2745))
- [3.7V and 290mAh battery](https://tinycircuits.com/products/lithium-ion-polymer-battery-3-7v-290mah) to power the voltage regulator
- An adhesive made following [these instructions]("Ecoflex Adhesive Procedure") and using these skin-safe materials from Smooth-On (note that trial size units are plenty of material):
	- [Ecoflex Gel](https://www.smooth-on.com/products/ecoflex-gel/)
	- [Slacker](https://www.smooth-on.com/products/slacker/)
	- [Ecoflex 00-10](https://www.smooth-on.com/products/ecoflex-00-10/)

**Vibrotactile module:**
- 2222a transistor
- 2k Ohm resistor
- ERM Motor: [TOTOT Mini-Vibration Motors 10mm x 2.7mm](https://www.amazon.com/TOTOT-Vibration-Button-Type-Vibrating-Appliances/dp/B07M5GN1YD)
- [3.7V and 150mAh battery](https://tinycircuits.com/products/lithium-ion-polymer-battery-3-7v-150mah)
These components allow us to make our own motor driver, similar to [this article](https://www.electronicsforu.com/electronics-projects/pancake-vibration-motors).

**Skin-stretch modules:**
- DC motor driver ([Adafruit DRV8871](https://www.adafruit.com/product/3190))
- Low Power 100:1 micro metal gear motor ([Polulu 2204](https://www.pololu.com/product/2204))
- Magnetic encoder pair kit for micro metal gearmotors([Pololu 3081](https://www.pololu.com/product/3081))
- Two [3.7V and 290mAh batteries](https://tinycircuits.com/products/lithium-ion-polymer-battery-3-7v-290mah) in series to power the Geared DC motor
Note that *each* of the skin-stretch modules (Slider, Twister, and Rocker) require the above materials.

**Probing module:**
- DC motor driver ([Adafruit DRV8871](https://www.adafruit.com/product/3190))
- Voice coil actuator ([Tectonic Elements TEAX19CO1-8](https://www.parts-express.com/Tectonic-TEAX19C01-8-19mm-Metal-Cup-Exciter-8-Ohm-297-208))
- Two [3.7V and 1000mAh batteries](https://tinycircuits.com/products/lithium-ion-polymer-battery-3-7v-1000mah) in series to power the voice coil