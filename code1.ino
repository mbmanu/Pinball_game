#include<Servo.h>
const int trigpin = 11;
const int echopin = 12;
float duration,cm;
//temperature dependent velocity eqn in cm/microsecond
float vel = (331 + (0.61 * 24))/10000;
int ir=5,val;
Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(ir,INPUT);
  
}

void loop() {
  //ping
  myservo.write(65);
  digitalWrite(trigpin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  
  //echo
  duration = pulseIn(echopin, HIGH);

  //distance = speed * time
  cm = (duration / 2.00) * (vel);
 
  Serial.println(cm);
  //delay(50);
  if(cm<20){        //the distance between the walls of the game area is 22
  if(cm<20&&cm>=17){
  delay(800);
  myservo.write(20);
  delay(100);
  myservo.write(0);}
  
  if(cm<17&&cm>=13){
  delay(300);
  myservo.write(20);
  delay(100);
        myservo.write(0);}
        
        if(cm<13&&cm>=9){
  delay(200);
  myservo.write(20);
  delay(100);
        myservo.write(0);}
        
        if(cm<9&&cm>=5){
  delay(100);
  myservo.write(20);
  delay(100);
        myservo.write(0);}
        if(cm<3)
        {
          delay(100);
        }
        
        if(cm<5){
  delay(50);
  myservo.write(20);
  delay(100);
        myservo.write(0);}
        
   val=digitalRead(ir);

    if(val==HIGH){
     Serial.println("GAME OVER");
      while(1){
     
    }
 } 
   }
   }
