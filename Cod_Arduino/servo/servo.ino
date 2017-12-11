#include <Servo.h>
 
Servo myservo;  // crea el objeto servo
 
int vel = 0;    // velocidad del servo
 
void setup() {
   myservo.attach(9);  // vincula el servo al pin digital 9
}
 
void loop() {
  
   //servo 100% CW (equivalente a angulo 180º)
   vel = 180;
   myservo.write(vel);              
   delay(1500); 
 
   //servo 100% CCW (equivalente a angulo 0º)
   vel = 0;
   myservo.write(vel);              
   delay(1500); 
}
