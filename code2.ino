#include <GY6050.h>           //GYRO library
#include <Wire.h>             //Wire library
#include <Servo.h>            //Servo library

Servo myservo;  


int Gx ,Gy ,Gz;               
GY6050 gyro(0x68); //to save GYRO data
int servo_pin=9;


void setup() {

  Serial.begin(9600);

  Wire.begin(); 
  gyro.initialisation();
  delay(100);
  myservo.attach(servo_pin);
}

void loop() {
  Gx = map(gyro.refresh('A', 'X'), -90, 90, 0, 180);                
  Gy = map(gyro.refresh('A', 'Y'), -90, 90, 0, 180);
  Gz = map(gyro.refresh('A', 'Z'), -90, 90, 0, 180);

  Serial.println(Gy);
  myservo.write(Gy);  //servo will rotate based on rotation or movement across y-axis                         
  delay(100);

}
