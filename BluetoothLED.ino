
//-- Basic bluetooth RGB LED control script that was tested utilizing the HC-06 Serial bluetooth module --//

int ledRed=8;
int ledGreen=9;
int ledBlue=10;
int tx=1;
int rx=0;
char inSerial[15];


void setup(){
  Serial.begin(9600);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(tx, OUTPUT);
  pinMode(rx, INPUT);
  allpinslow();
}

void loop(){
    int i=0;
    int m=0;
    delay(500);                                         
    if (Serial.available() > 0) {             
       while (Serial.available() > 0) {
         inSerial[i]=Serial.read(); 
         i++;      
       }
       inSerial[i]='\0';
      Check_Protocol(inSerial);
     }} 
     
void allpinslow()
{
digitalWrite(ledRed, LOW);
digitalWrite(ledGreen, LOW);
digitalWrite(ledBlue, LOW);
}     
  
void Check_Protocol(char inStr[]){   
  int i=0;
  int m=0;
  Serial.println(inStr);
  
  if(!strcmp(inStr,"red")){      //-- Activation of the Red LED when the input string is "red" --//
    allpinslow();
    digitalWrite(ledRed, HIGH);

    //-- Output Serial Response --//
    Serial.println("Red ON");

    clearBuffer(inStr);
       i=0;}
       
  if(!strcmp(inStr,"green")){      //-- Activation of the Green LED when the input string is "green" --//
    allpinslow();
    digitalWrite(ledGreen, HIGH);

    //-- Output Serial Response --//
    Serial.println("Green ON");
    clearBuffer(inStr);

       i=0;}
   
   if(!strcmp(inStr,"blue")){      //-- Activation of the Blue LED when the input string is "blue" --//
    allpinslow();
    digitalWrite(ledBlue, HIGH);

    //-- Output Serial Response --//
    Serial.println("Blue ON");

    clearBuffer(inStr);
       i=0;}
       
    else{
    clearBuffer(inStr);
    i=0;

}}

//-- Method for clearing the input buffer --//
void clearBuffer(char & inStr[])
{
  for(m=0;m<11;m++)
  {
    inStr[m]=0;
  }
}
  
