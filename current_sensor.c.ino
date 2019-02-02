#define GAIN 51
#define SHUNT .0005

int sensorPin = A1; 
int sensorValue = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  float voltage = sensorValue * (5.0 / (1024.0));
  // Compute low-side current
  float current = ( voltage / GAIN ) / SHUNT;
  Serial.println(current);
}
