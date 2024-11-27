int smokeSensorPin = A0;  
int ledPin = 8;          

int buzzerPin = 9;       

int threshold = 300; 
void setup() { 
Serial.begin(9600);  
pinMode(ledPin, OUTPUT);   
pinMode(buzzerPin, OUTPUT); 
} 
void loop() { 
  int sensorValue = analogRead(smokeSensorPin);   
  Serial.print("Smoke Level: "); 
  Serial.println(sensorValue); 
  
  if (sensorValue > threshold) { 
    digitalWrite(ledPin, HIGH);  

    digitalWrite(buzzerPin, HIGH);
  } else { 
    digitalWrite(ledPin, LOW);   
    digitalWrite(buzzerPin, LOW); 

}