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
- All CAD is published in the CAD Folder
- As for slicing the frame pieces, no special precautions are needed. Any 0.2mm profile will work. Supports are needed for the twist-lock system and for the main frame (if you have difficulties with overhangs), but otherwise not needed. PLA and PETG are recommended due to the necessity of heat-set inserts (you... really shouldn't be melting into ABS...). The 1mm spacers should be printed in TPU but should work with PLA.
- Tolerances are relatively conservative but may need additional adjustment with wackier printers.
- 
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

