#include <Arduino.h>

int ledm = 8;
int ledk = 9;
int ledh = 10;






void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledm, OUTPUT);
pinMode(ledk, OUTPUT);
pinMode(ledh, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledm, HIGH);
digitalWrite(ledk, LOW);
digitalWrite(ledh, LOW);
Serial.println("merah menyala");
Serial.println("kuning mati");
Serial.println("hijau mati");
delay(3000);
digitalWrite(ledm, LOW);
digitalWrite(ledk, HIGH);
digitalWrite(ledh, LOW);
Serial.println("merah mati");
Serial.println("kunig menyala");
Serial.println("hijau mati");
delay(1000);
digitalWrite(ledm, LOW);
digitalWrite(ledk, LOW);
digitalWrite(ledh, HIGH);
Serial.println("merah mati");
Serial.println("kuning mati");
Serial.println("hijau menyala");
delay(2000);
}