#include "DHT.h"
#define DHTPIN 13     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  delay(2000);
  // Reading temperature or humidity takes about 250 milliseconds!
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);
  Serial.println("\n");
  Serial.print("Humidity: ");
  Serial.println(h);
  Serial.print("Temperature in Celsius: ");
  Serial.println(t);
  Serial.print("Temperature in Fahrenheit: ");
  Serial.println(f);
}
