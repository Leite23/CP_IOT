#include <DHT.h>
#include <Servo.h>
#include <ArduinoJson.h>

#define DHTPIN 11         
#define LDRPIN A0         
#define SERVO_PIN 8       

DHT dht(DHTPIN, DHT11);
Servo myServo;

void setup() {
  Serial.begin(9600); 
  dht.begin();        
  myServo.attach(SERVO_PIN); 
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  
  int ldrValue = analogRead(LDRPIN);
  
  
  if (isnan(h) || isnan(t)) {
    Serial.println("Falha ao ler do DHT!");
    return;
  }

  
  StaticJsonDocument<100> json;
  json["Temperatura"] = t;
  json["Umidade"] = h;
  json["LDR"] = ldrValue;

 
  serializeJson(json, Serial);
  Serial.println();

 
  if (Serial.available() > 0) {
    char comando = Serial.read(); 
    if (comando == '4') {
      myServo.write(0);   
    } else if (comando == '5') {
      myServo.write(90);  
    } else if (comando == '6') {
      myServo.write(180); 
    }
  }

  delay(1000); 
}



