#include "Adafruit_DHT.h"


	


DHT dht(D6, DHT11);

void setup() {
	Serial.begin(9600); 



	dht.begin();
}

void loop() {

	delay(30);


	float t = dht.getTempCelcius();
	String temp = String::format("{\"Temp\": %f}", t);
	Particle.publish("Temp", temp, PRIVATE);


}

