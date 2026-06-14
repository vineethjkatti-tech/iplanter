#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define MOIST_DRY 800
#define MOIST_WET 400
#define DHTTYPE DHT11

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

const int moisturePin = A0;
const int dhtPin = D5;
DHT dht(dhtPin, DHTTYPE);

int moistureValue = 0;
float tempValue = 0;
float humValue = 0;

void drawSeedling(int x, int y) {
  display.fillRect(x + 2, y + 6, 8, 2, SSD1306_WHITE);
  display.drawLine(x + 4, y + 6, x + 1, y + 2, SSD1306_WHITE);
  display.drawLine(x + 8, y + 6, x + 11, y + 2, SSD1306_WHITE);
  display.drawLine(x + 6, y + 6, x + 6, y - 2, SSD1306_WHITE);
  display.fillCircle(x + 3, y - 1, 3, SSD1306_WHITE);
  display.fillCircle(x + 9, y - 1, 3, SSD1306_WHITE);
  display.fillCircle(x + 6, y - 4, 3, SSD1306_WHITE);
}

void setup() {
  Serial.begin(9600);
  dht.begin();

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED Failed");
    while (1) {
      delay(100);
    }
  }
}

void loop() {
  moistureValue = 0;
  for (int i = 0; i < 5; i++) {
    moistureValue += analogRead(moisturePin);
    delay(10);
  }
  moistureValue /= 5;

  tempValue = dht.readTemperature();
  humValue = dht.readHumidity();
  bool dhtValid = !isnan(tempValue) && !isnan(humValue);

  Serial.println("-------------- SENSOR DATA --------------");
  Serial.print("Moisture Value: ");
  Serial.println(moistureValue);
  if (dhtValid) {
    Serial.print("Temperature: ");
    Serial.print(tempValue);
    Serial.println(" C");
    Serial.print("Humidity: ");
    Serial.print(humValue);
    Serial.println(" %");
  } else {
    Serial.println("DHT11 read failed");
  }

  if (moistureValue > MOIST_DRY) {
    Serial.println("Status: DRY");
  } else if (moistureValue < MOIST_WET) {
    Serial.println("Status: WET");
  } else {
    Serial.println("Status: GOOD");
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  display.drawRect(0, 0, SCREEN_WIDTH, 16, SSD1306_WHITE);
  drawSeedling(2, 12);
  display.setCursor(18, 4);
  display.setTextSize(1);
  display.print("iPlanter");

  display.setCursor(88, 4);
  if (moistureValue > MOIST_DRY) {
    display.print("DRY");
  } else if (moistureValue < MOIST_WET) {
    display.print("WET");
  } else {
    display.print("GOOD");
  }

  display.drawLine(0, 16, SCREEN_WIDTH, 16, SSD1306_WHITE);

  display.setCursor(0, 20);
  display.print("Moisture: ");
  display.print(moistureValue);

  int pct = map(moistureValue, 0, 1023, 100, 0);
  pct = constrain(pct, 0, 100);
  int fillW = map(pct, 0, 100, 1, 125);

  display.drawRect(0, 30, SCREEN_WIDTH, 10, SSD1306_WHITE);
  if (fillW > 0) {
    display.fillRect(1, 31, fillW, 8, SSD1306_WHITE);
  }

  display.setCursor(0, 44);
  display.print("Temp: ");
  if (dhtValid) {
    display.print(tempValue, 1);
    display.print(" C");
  } else {
    display.print("--.- C");
  }

  display.setCursor(0, 54);
  display.print("Hum:  ");
  if (dhtValid) {
    display.print(humValue, 1);
    display.print(" %");
  } else {
    display.print("--.- %");
  }

  display.display();
  delay(2000);
}
