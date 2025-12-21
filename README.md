<img width="2932" height="1024" alt="PLA, PETG, TPU" src="https://github.com/user-attachments/assets/c87709fc-4d47-4ae8-b2c9-4afb21187af6" />

# **UPDATE 12/21: IMPORTANT INFORMATION**
### Issues have been found in the current design revision, which can result in damage to the electronics. Please DO NOT continue with this version unless you are prepared to face the risks!

# **Description**

DigiNote is a portable, distraction-free, WiFi-connected digital sticky note that integrates your calendars, agendas, to-do lists, and other desk activities into a single package. DigiNote is powered by a Raspberry Pi Pico 2W and a tri-color E-ink display, offering a power-efficient, sustainable alternative to both digital and physical methods for organizing your life! DigiNote is also extremely modular and entirely open source, so the platform is open to any customization. Want to make an album art display? An alarm clock? DigiNote is a versatile tool that can be taken far from its original software to be whatever you need it to be!

# **Backstory**

So there isn't a super dramatic reason I decided to develop DigiNote, but it boils down to sticky notes really annoying me. They are single-use, they clutter spaces, don't integrate into an increasingly digital workflow, use a ton of paper over time, and the adhesives on most make them difficult to recycle. I wanted to make a solution that, while relatively expensive, keeps the single-purpose idea of sticky notes (especially as phones have become hazards to productivity) in a sleek package that eliminates the clutter of traditional paper. The addition of a standard Raspberry Pi Pico 2W makes it future-proof for more intensive firmwares and makes MCU upgrades relatively easy. 

# **Features**
- Compatible with headerless Raspberry Pi Pico Models
  - DigiNote requires the castalatted version, so headered versions (even if desoldered) may not work correctly with DigiNote's mainboard.
  - The mainboard interfaces with the test pads on the bottom of the board, so the external USB port can be used to program the embedded MCU.
  - Other development boards that match the pinout of the Pi Pico are also usable (but may present other challenges).
- 4.2" Tri-color e-Ink Display
  - The tri-color display is visible in most conditions and has no blue light emission, making it extremely safe to use at night compared to an LCD/OLED display. 
  - The addition of red makes completed tasks much more visible compared to active tasks.
  - The e-Ink display allows DigiNote to stay on for up to several weeks!
- 3 Customizable Keys
  - These buttons (on GPIO 19-21) can be programmed to your organizing needs, or you can just use the defaults!
- WiFi 5 / BLE Compatibility
  - Diginote can connect to your phone to stay up to date on your upcoming events! (Compatible App/Firmware will be developed as DigiNote is finalized)
- Up to 14 days of battery life! (In theory, additional testing is needed)
  - The included 2500mAh battery powers DigiNote's power-efficient hardware for as long as you need it!
- Optional twist-lock system for attaching accessories!
  - Want to add a stand? Magnets? Suction cups so you can stick it onto things like a real sticky note? You can install a twist lock as an alternative backplate and integrate DigiNote into your workspace! 

# **CAD / 3D Printing**
- All CAD is published in the CAD Folder and can also be found with this [OnShape Link](https://cad.onshape.com/documents/893b8b73b69c6c408c8c46a7/w/015301cca51da9b937812f68/e/7a999b807e0775ac3ee2c189?renderMode=0&uiState=6924d38be932135a37adc137)
- As for slicing the frame pieces, no special precautions are needed. Any 0.2mm profile will work. Supports are needed for the twist-lock system and for the main frame (if you have difficulties with overhangs), but otherwise not needed. PLA and PETG are recommended due to the necessity of heat-set inserts (you... really shouldn't be melting into ABS...).
- The 1mm spacers should be printed in TPU, but should work with PLA.
- The twist-lock version of the DigiNote rear frame should be printed in 98A TPU or harder.
- Tolerances are relatively conservative but may need additional adjustment with wackier printers.
- The included soldering jig should be printed twice in a high-temperature filament (ideally ABS or better) to resist the heat of attaching a new Pi Pico
# **PCBs/Ordering**
<img width="908" height="143" alt="image" src="https://github.com/user-attachments/assets/8b7055cd-8b62-4956-ac24-cdb97f7f42f6" />
<img width="759" height="941" alt="image" src="https://github.com/user-attachments/assets/2ee79d6b-035c-4ab7-8206-ef619326084a" />

- **Update 12/21: in the US, PCBWay offers a comparably better value than JLCPCB for this project, costing roughly $70 (including tariffs) with coupons and DHL shipping**
- The PCB Manufacturing / EasyEDA project files can be found in the PCBs folder. Schematics will also be included as PDFs.
- The custom PCBs can be technically skipped for a properly protected TP4056 Battery charger module with load switching (and USB passthrough) and hand-soldering the wires to the Pi Pico, which can dramatically reduce the price to around ~$60-$80. 
  - However, this makes assembly significantly more complex and may require modifying the sub-frame significantly.
- Due to the size/design limitations of JLCPCB, the Input PCB does not qualify for PCBA and will require hand-soldering the board together!
- Some switching in the BOM may be needed to reduce the need for JLC extended parts (which is not difficult at all)
- The total cost I managed for all of the custom PCBs (5 Input PCBs, 2 PCBA Mainboards, 3 Blank Mainboard PCBs) was $54.38 (with some coupons).
- Here is a picture of my JLC cart if you need a reference:
- <img width="1710" height="857" alt="image" src="https://github.com/user-attachments/assets/2ca09cef-9ce3-4a11-83cb-b63bb4a7547d" />

# **Assembly**
- Assembly instructions are pretty limited, but putting together DigiNote is relatively easy and requires minimal tools (Soldering Iron, H2.0 Screwdriver, foam tape, doubled-sided tape, ect).
- A proper assembly manual will be made after DigiNote's prototype is verified to work. However, the CAD offers a great insight in how the device should be assembled. Here's the general steps:
  - Insert the M3 Heatset inserts on the mainframe and subframe.
  - Insert the FFC cable into the e-Ink module and insert the PCB into the mainframe (it should click into place).
  - Attach some foam tape on the back of the PCB to ensure the components don't move around.
  - Attach the input PCB and screw it into the mainframe (with the spacers in between the screws and the PCB). Ensure the buttons are sticking out on the other side.
  - Place the subframe on top of the main frame, screwing in the 2 8mm M3 screws towards the bottom. Make sure the FFC cable is routed through the cutout on the top of the subframe
  - Lay the 2 soldering jigs underneath the smaller, more central holes of the Mainboard PCB (the pegs of the jigs should stick out on the top). Lay the Pi Pico on top of the pegs so that it is flush with the mainboard.
  - Prepare the contacts of the Pi Pico and the Mainboard PCB, and bridge each corresponding set of pads by soldering them. Remove the jigs when finished.
  - Lay 4 spacers on the corresponding Mainboard PCB screwholes on the subframe. Attach the Mainboard with 4 6mm M3 screws.
  - Plug in the FFC cable into the ZIF connector of the Mainboard
  - Adhere the LiPo battery in the designated slot of the subframe, ensuring the cables are towards the top-left of the slot. DO NOT PLUG IN THE BATTERY JUST YET!!
  - Connect the Input PCB and Mainboard PCB with a 4-pin JST SH cable (>30mm).
  - Plug in the battery cable to the JST PH connector on the Mainboard
  - Insert the rear frame and screw the final 4 6mm M3 screws.
  - Plug in your DigiNote with a USB-C Cable to a computer and flash your desired firmware!

# **Bill Of Materials**
- **Note for Blueprint Reviewers, the BOM in the repo is the one I'll be using since it represents the complete costs of building a prototype (predominantly shipping), the one listed below is how much it will cost someone else to recreate the final product. Thanks!**

| Description | Suggested Manufacturer | Suggested Model | Unit Price | Minimum Quantity | Seller | Link/LCSC Part # |
| -------- | ------- | -------- | ------- | ------- | -------- | ------- |
| PCBs | JLCPCB | Check out PCBs Folder | $54.38 | 1 Order | JLCPCB | https://jlcpcb.com |
| Capacitor (10uF) | Samsung Electronics | CL21A106KAYNNNE | $0.0196 | 1 | LCSC | C15850 |
| Capacitor (100nF) | Samsung Electronics | CL21B104KCFNNNE | $0.0292 | 2 | LCSC | C28233 |
| JST SH Connector | JST | BM04B-SRSS-TB(LF)(SN) | $0.0309| 2 | LCSC | C160390 |
| JST PH Connector | JST | S2B-PH-K-S(LF)(SN) | $0.0048| 1 | LCSC | C173752 |
| FFC Connector | JS | AFA01-S08FCA-00 | $0.0186 | 1 | LCSC | C262755 |
| Red LED | Hubei Kento Electronics | KT-0603R | $0.0112 | 1 | LCSC | C2830320 |
| Green LED | YONGYUTAI | YLED0603G | $0.0008 | 1 | LCSC | C19273151 |
| Mosfet (3.7V Circuit) | TECH REPUBLIC | FS8205A | $0.0074 | 1 | LCSC | C2830320 |
| Mosfet (5V Circuit) | DIODES | DMP1045UQ-7 | $0.0249 | 1 | LCSC | C706746 |
| Resistor (10kΩ) | Uni-Royal | 0603WAF1002T5E | $0.0002 | 1 | LCSC | C25804 |
| Resistor (5.1kΩ) | Uni-Royal | 0402WGF5101TCE | $0.0001 | 1 | LCSC | C25905 |
| Resistor (2kΩ) | Uni-Royal | 0603WAF2001T5E | $0.0002 | 1 | LCSC | C22975 |
| Resistor (1kΩ) | Uni-Royal | 0603WAF1001T5E | $0.0002 | 3 | LCSC | C21190 |
| Resistor (100Ω) | Uni-Royal | 0603WAF1000T5E | $0.0002 | 1 | LCSC | C22775 |
| Resistor (300mΩ) | Uni-Royal | 0603WAF300LT5E | $0.0006 | 1 | LCSC | C247136 |
| Battery Charge IC | GOODWORK | TP4056 | $0.0064 | 1 | LCSC | C21713961 |
| Battery Protection IC | KUU | DW01A | $0.0032 | 1 | LCSC | C42459937 |
| Schottky Diode | FUXINSEMI | MBR0520L | $0.003 | 1 | LCSC | C5563735 |
| USB-C Port | SHOU HAN | TYPE-C16PIN | $0.0092 | 1 | LCSC | C393939 |
| e-Ink Module | BuyDisplay | ER-EPD042A1-1R-5074 | $18.41 | 1 | BuyDisplay | https://www.buydisplay.com/red-4-2-inch-e-ink-display-module-400x300-for-arduino-raspberry-pi |
| Li-Po Battery | PKCELL | LIPO785060 | $14.95 | 1 | Adafruit | https://www.adafruit.com/product/328 |
| MCU | Raspberry Pi | Pico 2W (Headerless) | $7.00 | 1 | Adafruit | https://www.adafruit.com/product/6087 |
| Buttons | Omron | B3F-100 | $0.125 | 3 | Adafruit | https://www.adafruit.com/product/367 |
| M3 Inserts | Adafruit | M3x3mm Brass Heat-set Inserts | $0.119 | 10 | Adafruit | https://www.adafruit.com/product/4256 |
| M3 Screws | Any Brand | BHCS M3x6mm | ~$0.015 | 10 | Any Seller | N/A |
| M3 Screws | Any Brand | BHCS M3x8mm | ~$0.015 | 2 | Any Seller | N/A |
| Foam Weatherstrip | Any Brand | Nonconductive with <3/16" thickness | ~$2.93 | 1 Roll | Any Seller | N/A |

# **Software**
- Since the eventual software behind DigiNote is so astronomically complex, the firmware included here is a drastically simplified test script that verifies the functionality of the e-Ink display.
- ## Installation for Official DigiNote Firmware
  -  Install Ardunio IDE 2.0 or newer
  - Add the Pi Pico 2W in Additional Board Manager URLs (or in the boards tab of the IDE, which also installs the proper BLE libraries).
  ```
  https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json

  ```
  - Install the following Arduino Libraries
     - WiFi: WiFi framework for future firmware
     - The e-Ink libraries in the Firmware folder of this repo (this will need to be imported into Arduino IDE)
     - The remaining libraries should have been handled by the Arduino-Pico library installed when adding the board
  - Download and open the DigiNote_TEST-FIRMWARE.ino file from the repo.
  - Open it in Arduino IDE
  - Plug in DigiNote and select "Raspberry Pi Pico 2W" in the proper serial port.
       - If installing this for the first time (especially after other firmware), remove the rear panel and press the hold BOOTSEL on the Pi Pico before plugging in DigiNote
  - Compile and flash the respective firmware.
  - And have fun!

# **Licensing**
[![CC BY 4.0][cc-by-shield]][cc-by]

This work is licensed under a
[Creative Commons Attribution 4.0 International License][cc-by].

[![CC BY 4.0][cc-by-image]][cc-by]

[cc-by]: http://creativecommons.org/licenses/by/4.0/
[cc-by-image]: https://i.creativecommons.org/l/by/4.0/88x31.png
[cc-by-shield]: https://img.shields.io/badge/License-CC%20BY%204.0-lightgrey.svg

# **Credits**
- Design:
  - The twist-lock design is a simplified, scaled-up version of DiAleksi's DiA Twist-Lock2 system, which can be found here: https://www.thingiverse.com/thing:3939555
  - The Pi Pico W model was provided by Ali Fatih Demir on GrabCAD, which can be found here: https://grabcad.com/library/raspberry-pi-pico-w-1
  - The Pi Pico EasyEDA footprint was based on a footprint provided by a contributor of the EasyEDA component library, which can be found here: https://easyeda.com/component/042278cb55f64aea99270f7684de3766
  - The remaining PCB component models are from LCSC.
- Software:
  - The test script was based on libraries written by EastRising Technology Co. LTD


