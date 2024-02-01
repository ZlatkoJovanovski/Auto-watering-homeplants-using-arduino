const int moistureSensorPin1 = A0;
const int moistureSensorPin2 = A1;
const int moistureSensorPin3 = A2;

const int pumpRelayPin1 = 2;
const int pumpRelayPin2 = 3;
const int pumpRelayPin3 = 4;

void setup() {
  Serial.begin(9600);

  pinMode(pumpRelayPin1, OUTPUT);
  pinMode(pumpRelayPin2, OUTPUT);
  pinMode(pumpRelayPin3, OUTPUT);
}

void loop() {
  float moisture_percentage1, moisture_percentage2, moisture_percentage3;
  
  int moistureLevel1 = analogRead(moistureSensorPin1);
  int moistureLevel2 = analogRead(moistureSensorPin2);
  int moistureLevel3 = analogRead(moistureSensorPin3);

  moisture_percentage1 = ( (moistureLevel1/1023.00) * 100 );
  moisture_percentage2 = ( (moistureLevel2/1023.00) * 100 );
  moisture_percentage3 = ( (moistureLevel3/1023.00) * 100 );

  Serial.print("Moisture Level 1: ");
  Serial.println(moistureLevel1);
  Serial.print("Moisture Percentage 1 = ");
  Serial.print(moisture_percentage1);
  Serial.print("Moisture Level 2: ");
  Serial.println(moistureLevel2);
  Serial.print("Moisture Percentage 2 = ");
  Serial.print(moisture_percentage2);
  Serial.print("Moisture Level 3: ");
  Serial.println(moistureLevel3);
  Serial.print("Moisture Percentage 3 = ");
  Serial.print(moisture_percentage3);

  if (moisture_percentage1 <= 10) {
    activatePump(pumpRelayPin1);
  }
  else
  {
    deactivatePump(pumpRelayPin1);
  } 
  if (moisture_percentage2 <= 30) {
    activatePump(pumpRelayPin2); 
  }
  else
  {
    deactivatePump(pumpRelayPin2);
  }
  if (moisture_percentage3 <= 60) {
    activatePump(pumpRelayPin3); 
  } 
  else { 
    deactivatePump(pumpRelayPin3); 
  }

  delay(1000);
}

void activatePump(int pumpRelayPin) {
  digitalWrite(pumpRelayPin, HIGH); 
  delay(5000);
}

void deactivatePump(int pumpRelayPin) {
  digitalWrite(pumpRelayPin, LOW); 
}
