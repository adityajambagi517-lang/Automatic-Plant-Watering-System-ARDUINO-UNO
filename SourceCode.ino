#include <DHT.h>

// Pin Definitions
#define SOIL A0
#define WATER_LEVEL 4
#define RAIN 3
#define DHTPIN 2
#define RELAY 7

#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);

  pinMode(SOIL, INPUT);
  pinMode(WATER_LEVEL, INPUT);
  pinMode(RAIN, INPUT);
  pinMode(RELAY, OUTPUT);

  digitalWrite(RELAY, LOW); // Pump OFF (LOW trigger)

  dht.begin();
}

void loop() {

  int soilValue = analogRead(SOIL);
  int waterLevel = digitalRead(WATER_LEVEL);
  int rainStatus = digitalRead(RAIN);

  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("Soil: "); Serial.println(soilValue);
  Serial.print("Water Level: "); Serial.println(waterLevel);
  Serial.print("Rain: "); Serial.println(rainStatus);
  Serial.print("Temp: "); Serial.println(temp);
  Serial.print("Humidity: "); Serial.println(humidity);

  // MAIN LOGIC

  if (soilValue > 600) { // Dry soil

    if (waterLevel == HIGH) { // Water available

      if (rainStatus == HIGH) { // No rain

        if (temp < 40) { // Optional safety condition

          digitalWrite(RELAY, HIGH); // Pump ON

        } else {
          digitalWrite(RELAY, LOW); // Too hot → OFF
        }

      } else {
        digitalWrite(RELAY, LOW); // Rain → OFF
      }

    } else {
      digitalWrite(RELAY, LOW); // No water → OFF
    }

  } else {
    digitalWrite(RELAY, LOW); // Soil wet → OFF
  }

  delay(2000);
}
