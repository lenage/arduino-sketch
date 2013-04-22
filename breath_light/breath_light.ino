int brightness = 0;
int fadeAmount = 5;
int delayDuration = 30;
int pins[] = {3, 10, 11};

void setup()  {
  int i;
  for(i = 0 ; i< 3; i++){
    pinMode(pins[i], OUTPUT);
  }
 }

void loop()  {
  int i;
  for(i=0; i< 3; i++){
   analogWrite(pins[i], brightness);
  }
 
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount ;
  }
  delay(delayDuration);
}
