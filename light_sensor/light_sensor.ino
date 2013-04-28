/*
  light sensor to control a LED
  Turns on an LED on when have light.

  This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int sensorPin = 0;
int sensorValue = 0;
int led = 12;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  sensorValue = analogRead(sensorPin);
  if(sensorValue >= 400){
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  }else
  {
    digitalWrite(led, LOW);
  }
  Serial.println(sensorValue);
}
