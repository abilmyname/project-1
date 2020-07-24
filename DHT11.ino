#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);

void setup() {
  Serial.begin(19200);
  Serial.println(F("DHT11 test!"));
  dht.begin();

}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if(isnan(h)||isnan(t)){
    Serial.println(F("Failed to read form fht11!"));
    return;
  }

  Serial.print(F("Humidity: "));
  Serial.println(h);
  Serial.print(F("% Temperature: "));
  Serial.print(t);
  Serial.println("c");
  

}
