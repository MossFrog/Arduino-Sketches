#define redPin 4
#define bluPin 3
#define grnPin 2

void setup() 
{
  pinMode(redPin, OUTPUT);
  pinMode(bluPin, OUTPUT);
  pinMode(grnPin, OUTPUT);
}

//-- Main Loop method that calls the colorShift function for two designated pins/colors --//
void loop() 
{
  colorShift(bluPin, redPin, grnPin);
  colorShift(redPin, bluPin, grnPin);
  delay(30);  
}

//-- The colorShift Method that loops through two designated colors --//
void colorShift(int color1, int color2, int color3)
{
  digitalWrite(color1, HIGH);
  digitalWrite(color2, LOW);
  for(byte i = 1; i<100; i++)
  {
    byte on = i;
    byte off = 100-on;
    for(byte a = 0; a < 100; a++)
    {
     digitalWrite(color3, HIGH);
     delayMicroseconds(on);
     digitalWrite(color3, LOW);
     delayMicroseconds(off);
    }
  }
}



