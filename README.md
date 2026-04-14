# iplanter
hey!! this is my first project for fallout, it is an IoT smart planter which uses moisture, temperature sensors to display the health of the plant on an OLED display. 





# Overview
I'm building an IoT based soil moisture and humidity, temperature sensing smart planter which warns (or reminds) the user to water the plant whenever the planter has low moisture or high temperature or humidity. All of this is displayed on a OLED display which has fancy emoticons correspoding to plant health ( a smiley for great plant health for eg). 

<img width="661" height="377" alt="image-removebg-preview (4)" src="https://github.com/user-attachments/assets/e28ff353-e076-4a92-975e-8d94944ff42c" />

<img width="465" height="537" alt="image-removebg-preview (5)" src="https://github.com/user-attachments/assets/a93bd3f5-3eaa-4016-9cc0-58a113fbe443" />



# Detailed Description 
This planter uses a D1 Mini Arduino board that has a Capacitive Soil Moisture Sensor, OLED display ( 128x64 ) and a DHT11. The whole thing is put together with jumper wires (for convenience). The OLED display is used to show all the temperature and moisture data and it has emoticons that correspond to current plant health for a more nicer appeal (and also easier to understand ;)). I'm thinking of usb for power but a battery could also work because power consumption would be relatively less. 

<img width="1605" height="867" alt="iplanter_3dpcb_img" src="https://github.com/user-attachments/assets/64b8f802-d875-44b7-8f9e-f73b439faf78" />


# Glance on Firmware:
The pcb contains code to _read the moisture and temperature data_ and _display it on the OLED display_
The UI code is well spaced and things have space to breathe so it looks more premium (althought how could a small display ever feel premium ;)

_Here is a snippet of my code:_
<img width="1319" height="445" alt="image" src="https://github.com/user-attachments/assets/6e185714-69bf-41fe-b02a-06a4d8af5055" />

# Why iplanter?
I want to make this project because many plants die or wilt off without human observation and as our nature we tend to forget to keep watch on our plants. This ignorance leads to the death of the plant. I mean many people don't know when their plant needs water or is too warm or too cold..
My project solves this problem. The health of the plant is displayed on an OLED display bound to the pot.

<img width="844" height="775" alt="image" src="https://github.com/user-attachments/assets/364b5d27-9e69-45fc-9829-e96e339fb912" />

To make it more fun the display includes fun emoticons like smiley or sad face for a better understand of the plant's health.

# Structure
The project has 3 components
1. The pot of course
2. A casing that encloses the pcb board (other than the display) for protection against dirt
3. The actual pcb that does all the work AKA _the brain_

<img width="1261" height="679" alt="Screenshot 2026-04-12 233335" src="https://github.com/user-attachments/assets/fa3ca28c-6865-4be8-8868-2964c9bb568c" />







