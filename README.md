# iplanter
hey!! this is my first project for fallout, it is an IoT smart planter which uses moisture, temperature sensors to display the health of the plant on an OLED display. 





#Overview
I'm building an IoT based soil moisture and humidity, temperature sensing smart planter which warns (or reminds) the user to water the plant whenever the planter has low moisture or high temperature or humidity. All of this is displayed on a OLED display which has fancy emoticons correspoding to plant health ( a smiley for great plant health for eg). 

#Detailed Description 
This planter uses a D1 Mini Arduino board that has a Capacitive Soil Moisture Sensor, OLED display ( 128x64 ) and a DHT11. The whole thing is put together with jumper wires (for convenience). The OLED display is used to show all the temperature and moisture data and it has emoticons that correspond to current plant health for a more nicer appeal (and also easier to understand ;)). I'm thinking of usb for power but a battery could also work because power consumption would be relatively less. 

#Glance on Firmware:
I'm planning to add graphs and bars for temperature and humidity on the OLED display (Not sure if I'll be able to do it because the screen is too small ig). 
I'm also planning to design an app to show the plant health so that the user can water the plant when it gets low on moisture even when he is not infront of the OLED display itself. 
