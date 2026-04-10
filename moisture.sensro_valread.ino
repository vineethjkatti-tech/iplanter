#include <DHT.h>

//Pins
int moisturePin = A0;   //to defin the pin to where the sensor is connected to 
int moistureValue = 0;  // to provide a variable to store the sensor read data

//To define the sensor or setup
int dhtPin = D5;        //to define the dht11 sensor pin
#define DHTTYPE DHT11
DHT dht(dhtPin, DHTTYPE);

//Variables

float tempValue = 0;    // variable for temp
float humValue = 0;     //variable for humidity

void setup() {
  Serial.begin(9600); // start serial comms
  dht.begin();
}

void loop() {
  //To read the moisture
  moistureValue = analogRead(moisturePin);  //to start reading the sensor

  //to read the dht - temp and hum values
  tempValue = dht.readTemperature();
  humValue = dht.readHumidity();
  //to print values
  Serial.println("-------------- SENSOR DATA --------------");

  Serial.print("Moisture Value: ");
  Serial.println(moistureValue);  //to actually print the values, 'ln' is used to print the value on one line once and then move to the next line so that it doesnt get messy

  Serial.print("Temperature: ");
  Serial.print(tempValue);
  Serial.println("C");

  Serial.print("Humidity: ");
  Serial.print(humValue);
  Serial.println(" %");

  //eg calibration logic
  if (moistureValue > 800) {
    Serial.println("Status: DRY");
  }
  else if (moistureValue < 400) {
    Serial.println("Status: TOO WET");
  }
  else {
    Serial.println("Status: GOOD");
  
  }
  Serial.println("--------------------------------------\n");

  delay(2000); // to wait for a sec(calc in milsec) again for no mess

}

//need to put this in arduino ide