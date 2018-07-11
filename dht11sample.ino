#include<DHT.h>
#define DHTTYPE DHT11
#define DHTPIN 2

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
    int t = dht.readTemperature();
    int h = dht.readHumidity();

    Serial.print("Temperature = ");
    Serial.print(t);
    Serial.print("Humidity = ");
    Serial.println(h);
    delay(1000);
}
