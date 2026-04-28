# iplanter
hey!! this is my first project for fallout, it is an IoT smart planter which uses moisture, temperature sensors to display the health of the plant on an OLED display. 

# Overview
I'm building an IoT based soil moisture and humidity, temperature sensing smart planter which warns (or reminds) the user to water the plant whenever the planter has low moisture or high temperature or humidity. All of this is displayed on a OLED display which has fancy emoticons correspoding to plant health ( a smiley for great plant health for eg). 

<img width="239" height="262" alt="image" src="https://github.com/user-attachments/assets/02c9deb1-a789-4b24-b947-c14409dc1196" />


# Detailed Description 
This planter uses a D1 Mini Arduino board that has a Capacitive Soil Moisture Sensor, OLED display ( 128x64 ) and a DHT11. . All these components are connected to the pcb using _pin headers_. The OLED display is used to show all the temperature and moisture data. The pcb includes a _DC barrel jack_ that is used for power supply. The display is fitted at the top using adhesive (for simplicity) for easier view. All the electronics sit at the bottom part and the two parts are connect with a bayonet mount. 


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

# Structure
The project has 3 main parts:
1. The Upper part which houses the display and part where you put soil into.
2. The bottom part which contains all the electronics.
3. An encasing for the electronic parts of the moisture sensor.









