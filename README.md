<img width="2932" height="1024" alt="PLA, PETG, TPU" src="https://github.com/user-attachments/assets/c87709fc-4d47-4ae8-b2c9-4afb21187af6" />

# **Description**

DigiNote is a portable, distraction-free, WiFi-connected digital sticky note that integrates your calendars, agendas, to-do lists, and other desk activities into a single package. DigiNote is powered by a Rapsberry Pi Pico 2W and a tri-color E-ink display, allowing for a power-efficient, sustainable alternative to both digital and physical methods of organizing your life! DigiNote is also extremely modular and entirely open source, so the platform is open to any customization. Want to make an album art display? An alarm clock? DigiNote is a versatile tool that can be taken far from its original software to be whatever you need it to be!

# **Backstory**

So there isn't a super dramatic reason why I decided to develop DigiNote, but it boils down to the fact that sticky notes really annoy me. They are single-use, they clutter spaces, don't integrate into an increasingly digital workflow, they use a ton of paper over time, and the adhesives on most make them difficult to recycle. I wanted to make a solution that, while relatively expensive, keeps the single-purpose idea of sticky notes (especially as phones have become hazards to productivity) in a sleek package that eliminates the clutter of traditional paper. The addition of a standard Raspberry Pi Pico 2W makes it future-proof for more intensive firmwares and makes MCU upgrades relatively easy. 

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

- The PCB Manufacturing / EasyEDA project files can be found in the PCBs folder. Schematics will also be included as PDFs.
- The custom PCBs can be technically skipped in leiu of a properly protected TP4056 Battery charger module with load switching (and USB passthrough) and hand-soldering the wire0s to the Pi Pico, which can dramatically reduce the price to around ~$60-$80
  - However, this makes assembly significantly more complex and may require modifing the sub-frame sigicantly.
- Due to the size/design limitations of JLCPCB, the Input PCB does not qualifiy for PCBA and will require hand-soldering the buttons and the surface-mount JST connector (which may present a challenge for begineers).
- Some switching in the BOM may be needed to reduce the need for JLC extended parts (which is not difficult at all)
- The total cost I managed for all of the custom PCBs (5 Input PCBs, 2 PCBA Mainboards, 3 Blank Mainboard PCBs) was $54.38 (with some coupons).
- Here is a picture of my JLC cart if you need a refrence:
- <img width="1710" height="857" alt="image" src="https://github.com/user-attachments/assets/2ca09cef-9ce3-4a11-83cb-b63bb4a7547d" />

# **Assembly**
- Assembly instructions are pretty limited but putting together DigiNote is releatively easy and requires minimal tools (Soldering Iron, H2.0 Screwdriver, foam tape, doubled-sided tape, ect).
- A proper assembly manual will be made after DigiNote's first prototype is verified to work. However, the CAD offers a great insight in how the device should be assembled. Here's the general steps:
  - Insert the M3 Heatset inserts on the mainframe and subframe.
  - Insert the FFC cable into the e-Ink module and insert the PCB into the mainframe (it should click into place).
  - Attach some foam tape on the back of the PCB to ensure the components don't move around.
  - Attach the input PCB and screw it into the mainframe (with the spacers inbetween the screws and the PCB). Ensure the buttons are sticking out on the other side.
  - Place the subframe on top of the main frame, screwing in the 2 8mm M3 screws towards the bottom. Make sure the FFC cable is routed through the cutout on the top of the subframe
  - Lay the 2 soldering jigs underneath the smaller, more central holes of the Mainboard PCB (the pegs of the jigs should stick out on the top). Lay the Pi Pico on top of the pegs so that it is flush with the mainboard.
  - Prepare the contacts of the Pi Pico and the Mainboard PCB and bridge the each corresponding set of pads by soldering them. Remove the jigs when finished.
  - Lay 4 spacers on the corresponding to the Mainboard PCB screwholes on the subframe. Attach the Mainboard with 4 6mm M3 screws.
  - Plug in the FFC cable into the ZIF connector of the Mainboard
  - Adhere the LiPo battery in the designated slot of the subframe, ensuring the cables are towards the top-left of the slot. DO NOT PLUG IN THE BATTERY JUST YET!!
  - Connect the Input PCB and Mainboard PCB together with a 4-pin JST SH cable (>30mm).
  - Plug in the battery cable to the JST PH connector on the Mainboard
  - Insert the rear frame and screw the final 

# **Licensing**
Shield: [![CC BY 4.0][cc-by-shield]][cc-by]

This work is licensed under a
[Creative Commons Attribution 4.0 International License][cc-by].

[![CC BY 4.0][cc-by-image]][cc-by]

[cc-by]: http://creativecommons.org/licenses/by/4.0/
[cc-by-image]: https://i.creativecommons.org/l/by/4.0/88x31.png
[cc-by-shield]: https://img.shields.io/badge/License-CC%20BY%204.0-lightgrey.svg

# **Credits**
- Design
  - The twist-lock design is a simplified, scaled-up version of DiAleksi's DiA Twist-Lock2 system, which can be found here: https://www.thingiverse.com/thing:3939555

