/*
 * contact: leandrobpedro@gmail.com
 */

#include <Arduino.h>


//int led = 13;

void setup () {
	Serial.begin(9600);
	Serial1.begin(9600);

	Serial1.print("Start!");
}

void loop () {
	delay(5000);
	Serial1.print("write...");
}
