int redLight = 8;     
int yellowLight = 7;  
int greenLight = 6;   
void setup() { 
  pinMode(redLight, OUTPUT); 
  pinMode(yellowLight, OUTPUT); 
  pinMode(greenLight, OUTPUT); 
} 
void loop() { 
// Green light ON for 5 seconds 
  digitalWrite(greenLight, HIGH); 
  delay(5000);  // Delay of 5 seconds 
  digitalWrite(greenLight, LOW);  // Turn off green light 

// Yellow light ON for 2 seconds 
  digitalWrite(yellowLight, HIGH); 
  delay(2000);  // Delay of 2 seconds 
  digitalWrite(yellowLight, LOW);  // Turn off yellow light 

// Red light ON for 5 seconds 
  digitalWrite(redLight, HIGH); 
  delay(5000);  // Delay of 5 seconds 
  digitalWrite(redLight, LOW);  // Turn off red light
}