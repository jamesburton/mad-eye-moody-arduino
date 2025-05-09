# mad-eye-moody-arduino
A 3d printed and servo controlled Mad Eye Moody prop 

## Video
https://github.com/user-attachments/assets/9636427b-886f-4686-b2c2-2b92b0d8f3cc

## Image(s)
![AssembledAndWired](https://github.com/user-attachments/assets/b8fd2519-17dc-4079-a469-7a25226802a5)

## 3D Printed Files (in 3d-models)
I have included both the FreeCAD .FCStd files and the .3mf files for most files, which are as follows:
* Eye Mount - This is the plain outer shell, which can be adorned with additional screws to task by simply gluing on or by cutting or melting holes for each as needed.
* Eye Servo Base - This is designed to hold a D1302 Nano Servo (https://www.amazon.co.uk/Servo-Portable-Digital-Upgrade-Aircraft/dp/B08GQ489DS) and slots into the eye mount
* Nano Servo Eye 2 - The base of the eye with mount stalk
* Nano Servo Eye 2_Narrow-Peg - An alternative model with tighter tolerance for the servo mount hole ... only one or other is required
* FlatEye6.8mmx2mm-BodyPad - 3mf only - A slightly smaller plain version of the eye for use with weaker print tolerance
* FlatEye6-ManuallyPaintedIris - A Bambu Studio 3mf with outer iris ring and pupil painted
* FlatEye7mmx2mm - FCStd only - The FreeCAD model for the eye insert

## Bill of Materials

* 3D Printed Parts from above models (1 mount, 1 base, 1 eye and one flat eye piece)
* D1302 Nano Servo
* Arduino compatible microcontroller (MCU) such as a Raspberry Pi Pico, ESP32, NodeMCU or standard Arduino board
* Super Glue
* Clear nail varnish or other glossy varnish
* Straps for mounting around your head if wearing it
* Optional - 5V power input, such as USB-C decoy board, 5V battery pack, etc.  Ensure this does not provide over 1A as standard as you may melt the servo.  This may improve servo control such as reducing jitters.
* Optional - screws / bolts for decoration

## Instructions

* Print a mount, a base, either of the nano servo eye models and one of the flat eye pieces.
* If powering directly through the MCU then simply wire 5V, GND and Pin 9 (or your chosen data pin) to the servo or a suitable connector to plug into your servo
* If powering from the optional 5V source for more reliable servo control then split the 5V and GND output from this in two and route one lot to 5V and GND on your MCU, and then the others alongside a wire from Pin 9 (or your chosen data pin) to the servo or a suitable connector to plug into your servo.
* If using a plain flat eye you may want to paint a design onto your print
* Insert the flat eye piece into the main nano servo eye print and coat with glossy varnish to hold place and provide a ice wet look
* Glue the eye piece onto the short single-arm servo mount that comes with the servo
* Move the servo to the middle of its range and screw the servo mount with eye onto the servo
* Insert the nano servo into the mount base
* Glue or trim and screw in any screws, bolts, nuts, etc. for decoration ensuring that they will not block movement of the eye on the servo
* Paint/Spray the eye mount if required ... I recommend masking the inside of the eye mount with tape if spraying as the base tolerance is quite tight
* Insert the eye-base into the eye mount and push up to leave comfort space at the back and have the eye near the top of the mount
* If completing as a wearable head-piece the wiring should be fed through the leather straps and those should be glued to the back of the eye base.
* Flash the ServoBasicPin9Random program to your MCU using the Arduino IDE
* Connect the servo to your connector if not directly wired
* Connect power to the MCU or power input
* Tweak min/max position and delay settings, and change the data pin configuration as required until your movement speed, range, etc.
