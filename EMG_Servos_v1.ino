// reads analog input from the five inputs from your arduino board 
// and sends it out via serial
#include <Servo.h>
Servo finger;
// variables for input pins and
int analogInput = A0;
int servoPin = 6;  
// variable to store the value 
int value; 
 
void setup()
{
  // declaration of pin modes
       finger.attach(servoPin); 
       pinMode(servoPin, OUTPUT); 
    pinMode(analogInput, INPUT);    
  
  
  // begin sending over serial port
  Serial.begin(9600);
}

void loop()
{
  // read the value on analog input
  
    value = analogRead(analogInput);
  int pos = map(value, 0, 100, 10, 180);
  pos = constrain(pos, 10, 170);
  finger.write(pos);

  // print out value over the serial port
  
    Serial.println(value);
   
  
  // wait for a bit to not overload the port
  delay(100);
}


