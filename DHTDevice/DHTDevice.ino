#include </DHT/dht.h>
#define dht_dpin A0
dht DHT;
void setup()
{
	Serial.begin(9600);
	delay(1000);
}

void loop()
{
	DHT.read11(dht_dpin);
	Serial.print("TEMP:");
	Serial.println(DHT.temperature);
	Serial.print("HUM:");
	Serial.println(DHT.humidity);
	delay(1000);
}
