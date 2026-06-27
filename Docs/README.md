# iplanter
**iplanter** is a smart planter which uses moisture and temperature sensor to display the health of the plant on an OLED display. 

# Note
**THIS PROJECT NEEDS MANUAL REVIEW.** Please review the journal.md and **Reduce Time** if needed. 

Click [here](https://github.com/vineethjkatti-tech/iplanter/blob/main/journal/iplanter%20journal.md) for the journal.md file!!

# Overview
I'm building a soil moisture-humidity and temperature sensing smart planter which warns (or reminds) the user to water the plant whenever the planter has low moisture or high temperature or humidity. All of the data is displayed on the OLED display.

<img width="1280" height="1024" alt="iplanter(detached)" src="https://github.com/user-attachments/assets/d2d50945-5a55-421f-a495-251fa2300045" />


# Detailed Description 
This planter uses a **D1 Mini Arduino board** that has a **Capacitive Soil Moisture Sensor**, **OLED display ( 128x64 )** and a **DHT11**. All these components are connected to the pcb using **_pin headers_**. The OLED display is used to show all the **temperature** and **moisture data**. The PCB is powered using  **5V DC Barrel Jack**, then it is routed through D1 Mini's peripherals. The display is fitted at the top using **4 M2 Heatset Inserts**. All the electronics sit at the bottom part and the two parts are connect with a **Bayonet mount**. The **PCB** is connected to **Part A** using **4 M2 Screws**.




# Glance on Firmware:
The pcb contains code to _read the moisture and temperature data_ and _display it on the OLED display_
The UI code is well spaced and things have space to breathe so it looks more premium (althought how could a small display ever feel premium ;)

<img width="571" height="437" alt="pcb" src="https://github.com/user-attachments/assets/83bc018a-7cad-43a3-8a4e-c90a5e52107e" />


# ZINE PAGE!!
<img width="443" height="683" alt="iplanter" src="https://github.com/user-attachments/assets/4ad6c90c-c71b-4b60-8dbf-40a1c9d52c6a" />

Check out my zine page...
You can find it [here](https://github.com/vineethjkatti-tech/iplanter/blob/main/Docs/zine.pdf)


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

1. Use M2 screws and insert to mount the display to part a.
2. The pcb should sit in the grooves made in part b.

**Note: You need to use 4 M2 self-tapping screws to connect the PCB to Part A.**

>Power Supply

Connect the barrel jack to a switchboard using suitable cable.

>Firmware

The firmware code can be found [Here](https://github.com/vineethjkatti-tech/ATTN_unit/blob/main/Firmware/main.cpp). Feel free to modify it.


_If you have done everything correctly your iplanter should be ready and functioning_




# Structure
The project has 3 main parts:
1. The Upper part which houses the display and part where you put soil into.
2. The bottom part which contains all the electronics.
3. An encasing for the electronic parts of the moisture sensor.

# Note:
1. Gerber files can be found in the zip folder in _Production_ folder.
2. All the pinout diagrams and wiring schematics can be found [Here](https://github.com/vineethjkatti-tech/ATTN_unit/tree/main/KICAD)

# Gallery

Wiring Diagram:

<img width="460" height="375" alt="image" src="https://github.com/user-attachments/assets/fc77b9f6-8f6c-4ebe-a6fa-6ebbbacbbdb8" />

iplanter:

<img width="238" height="302" alt="image" src="https://github.com/user-attachments/assets/2aa4af70-b90f-4394-83dc-768b00ddbd18" />

PCB:

<img width="571" height="437" alt="pcb" src="https://github.com/user-attachments/assets/f18d41ae-db23-4d62-8ac2-5409549e06ca" />


Rough Sketch for Design:

<img width="720" height="1280" alt="WhatsApp Image 2026-04-17 at 9 29 17 PM" src="https://github.com/user-attachments/assets/517bfae0-5abe-4c96-8787-3ec7c64766ec" />

Zine Page:

<img width="443" height="683" alt="iplanter" src="https://github.com/user-attachments/assets/f5cac6ae-302c-45a2-a985-dddb22c20b6f" />


---------


**I have used about 5-10 percent Ai for queries and brainstorming in this project.**


made with love by vivacious_eye :()






