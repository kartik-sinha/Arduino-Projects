int sensorPin = A0;  

int ledPin = 7;      

void setup() { 
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT);  
} 
void loop() { 
  int sensorValue = analogRead(sensorPin);   
  Serial.print("Soil Moisture Level: "); 
  Serial.println(sensorValue); 

  if (sensorValue < 300) {   
    digitalWrite(ledPin, HIGH);  
  } else { 
    digitalWrite(ledPin, LOW);   
  } 
  delay(1000);  
}