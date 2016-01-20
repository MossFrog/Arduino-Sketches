int rPin = 6;
int bPin = 5;

#define trigPin 13 // Trigger Pin
#define echoPin 11 // Echo Pin

long duration, distance;

void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}


void loop()
{
  
  
  /* The following trigPin/echoPin cycle is used to determine the
   distance of the nearest object by bouncing soundwaves off of it. */ 
   digitalWrite(trigPin, LOW); 
   delayMicroseconds(2); 
  
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10); 
   
   digitalWrite(trigPin, LOW);
   duration = pulseIn(echoPin, HIGH);
   
   //Calculate the distance (in cm) based on the speed of sound.
   distance = duration/58.2;
   
   if(distance > 20)
   { distance = 20; }
   
   if(distance < 0)
   { distance = 0; }
  
  
  analogWrite(rPin, distance*10);
  analogWrite(bPin, (200-distance*10));
  
  delay(50);
}
