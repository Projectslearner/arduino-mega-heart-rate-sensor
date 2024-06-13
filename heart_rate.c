/*
    Project name : Heart Rate Sensor
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-heart-rate-sensor
*/

const int heartSensorPin = A0; // Analog pin connected to the heart rate sensor
int sensorValue = 0;
unsigned long previousMillis = 0;  // Store the previous time
const long interval = 1000; // Delay interval

void setup() {
  // Initialize the serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the value from the heart rate sensor
  sensorValue = analogRead(heartSensorPin);
  
  // Calculate heart rate based on sensor value
  int heartRate = map(sensorValue, 0, 1023, 30, 200); // Map sensor value to heart rate range
  
  // Print heart rate to the Serial Monitor
  Serial.print("Heart Rate: ");
  Serial.print(heartRate);
  Serial.println(" BPM"); // Beats per minute

  // Add a small delay before the next reading
  delay(1000);
}
