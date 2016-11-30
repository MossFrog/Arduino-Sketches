int rPin = 11;
int gPin = 10;
int bPin = 9;

// COMMON ANODE vs. COMMON CATHODE //
// ANODE - GND CATHODE - 5V //

void setup()
{
 pinMode(rPin, OUTPUT);
 pinMode(gPin, OUTPUT);
 pinMode(bPin, OUTPUT);
  
}


void loop() 
{
  analogWrite(rPin, 0);
  analogWrite(gPin, 0); 
  analogWrite(bPin, 255);                
}
