# iplanter
hey!! this is my first project for fallout, it is an IoT smart planter which uses moisture, temperature sensors to display the health of the plant on an OLED display. 

# Overview
I'm building an IoT based soil moisture and humidity, temperature sensing smart planter which warns (or reminds) the user to water the plant whenever the planter has low moisture or high temperature or humidity. All of this is displayed on a OLED display.

<img width="239" height="262" alt="image" src="https://github.com/user-attachments/assets/02c9deb1-a789-4b24-b947-c14409dc1196" />


# Detailed Description 
This planter uses a **D1 Mini Arduino board** that has a **Capacitive Soil Moisture Sensor**, **OLED display ( 128x64 )** and a **DHT11**. All these components are connected to the pcb using **_pin headers_**. The OLED display is used to show all the **temperature** and** moisture data**. The PCB is powered using  **5V DC Barrel Jack**, then it is routed through D1 Mini's peripherals. The display is fitted at the top using **4 M2 Heatset Inserts**. All the electronics sit at the bottom part and the two parts are connect with a **Bayonet mount**. 


# Glance on Firmware:
The pcb contains code to _read the moisture and temperature data_ and _display it on the OLED display_
The UI code is well spaced and things have space to breathe so it looks more premium (althought how could a small display ever feel premium ;)
<img width="314" height="198" alt="image" src="https://github.com/user-attachments/assets/fe7cbb00-371c-4997-b788-28b8c4086b71" />

_Here is a snippet of my code:_
<img width="1319" height="445" alt="image" src="https://github.com/user-attachments/assets/6e185714-69bf-41fe-b02a-06a4d8af5055" />

# Zine Page
Check out my zine pagee..
<img width="147" height="227" alt="image" src="https://github.com/user-attachments/assets/c20e3c09-863b-4760-95ea-555b712f7bcc" />
_You can also find it as a pdf in this repo._

# Why iplanter?
I want to make this project because many plants die or wilt off without human observation and as our nature we tend to forget to keep watch on our plants. This ignorance leads to the death of the plant. I mean many people don't know when their plant needs water or is too warm or too cold..
My project solves this problem. The health of the plant is displayed on an OLED display bound to the pot.



# Steps To Build iplanter
_All the materials needed are given the in the BOM file_

>Assembling the 3D Parts

1. Start by joining the Part A and Part B ( Models can be found in _CAD_ folder) Using the bayonet mount.
2. Next insert the Moisture Sensor into its _encasing_.

>PCB

First get the pcb printed and do the following:
1. DHT11 to D1 Mini:
Make use of the 3 pin female headers to connect the sensor.

2. Capacitive Sensor to D1 Mini:
Use the 3 pin mount given on the pcb to connect the sensor to it.
.Route the wires through the hole given on the part b just below where the sensor sits.

3. 1.3 inch I2C OLED Display Module to D1 Mini:
Use the 4 pin mount given on the pcb to connect the screen to pcb using _jumper wires_
.Route the wires through the tubes that stretch from the display to the end of Part A.

4. DC Barrel Jack to D1 Mini
Solder it to the 3 through holes on the pcb.

>Further

1. Use adhesive - Glue gun, industry adhesive (503 super glue) to mount the display to part a.
2. The pcb should sit in the grooves made in part b.

>Power Supply

Connect the barrel jack to a switchboard using suitable cable.

>Firmware

The firmware code can be found [Here](iplanter/Firmware). Feel free to modify it.


_If you have done everything correctly your iplanter should be ready and functioning_




# Structure
The project has 3 main parts:
1. The Upper part which houses the display and part where you put soil into.
2. The bottom part which contains all the electronics.
3. An encasing for the electronic parts of the moisture sensor.

# Note:
1. Adhesive is used to mount the display to Part A for simplicity.
2. Gerber files can be found in the zip folder in _Productions_ folder.
3 All the pinout diagrams and wiring schematics can be found [Here](iplanter/KICAD)

# Gallery

Wiring Diagram:
<img width="460" height="375" alt="image" src="https://github.com/user-attachments/assets/fc77b9f6-8f6c-4ebe-a6fa-6ebbbacbbdb8" />

iplanter:
<img width="238" height="302" alt="image" src="https://github.com/user-attachments/assets/2aa4af70-b90f-4394-83dc-768b00ddbd18" />

PCB:
<img width="614" height="343" alt="image" src="https://github.com/user-attachments/assets/59f05787-012a-4bc3-9c54-76b6134b58d2" />

Rough Sketch for Design:
<img width="720" height="1280" alt="WhatsApp Image 2026-04-17 at 9 29 17 PM" src="https://github.com/user-attachments/assets/517bfae0-5abe-4c96-8787-3ec7c64766ec" />

Zine Page:
<img width="148" height="225" alt="image" src="https://github.com/user-attachments/assets/570a7dc6-2c6b-4991-b338-7c53f4eea06f" />


made with love by vivacious_eye :()






