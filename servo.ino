#include <Servo.h> 

Servo finger1, finger2, finger3, finger4, finger5;

int servoPin1 = 5;
int servoPin2 = 6;
int servoPin3 = 9;
int servoPin4 = 10;
int servoPin5 = 3;

int flexPin1 = A0;
int flexPin2 = A1;
int flexPin3 = A2;
int flexPin4 = A3;
int flexPin5 = A4;

void setup()
{
  finger1.attach(servoPin1);
  finger2.attach(servoPin2);
  finger3.attach(servoPin3);
  finger4.attach(servoPin4);
  finger5.attach(servoPin5);
  
  pinMode(servoPin1, OUTPUT);
  pinMode(servoPin2, OUTPUT);
  pinMode(servoPin3, OUTPUT);
  pinMode(servoPin4, OUTPUT);
  pinMode(servoPin5, OUTPUT);
  
  pinMode(flexPin1, INPUT);
  pinMode(flexPin2, INPUT);
  pinMode(flexPin3, INPUT);
  pinMode(flexPin4, INPUT);
  pinMode(flexPin5, INPUT);
}

void loop()
{
  int flex1 = analogRead(flexPin1);
  int flex2 = analogRead(flexPin2);
  int flex3 = analogRead(flexPin3);
  int flex4 = analogRead(flexPin4);
  int flex5 = analogRead(flexPin5);
  
 int pos1 = map(flex1, 150, 500, 0, 180);
  pos1 = constrain(pos1, 0, 180);
  int pos2 = map(flex2, 250, 800, 0, 180);
  pos2 = constrain(pos2, 0, 180);
  int pos3 = map(flex3, 130, 400, 0, 180);
  pos3 = constrain(pos3, 0, 180);
  int pos4 = map(flex4, 320, 600, 0, 180);
  pos4 = constrain(pos4, 0, 180);
  int pos5 = map(flex5, 250, 650, 0, 180);
  pos5 = constrain(pos5, 0, 180);
  
  finger1.write(pos1);
  finger2.write(pos2);
  finger3.write(pos3);
  finger4.write(pos4);
  finger5.write(pos5);
}

