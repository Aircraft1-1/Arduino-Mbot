#include <Arduino.h>
#include <MeMCore.h>
#include <stdbool.h>


MeDCMotor motor1(M1);//Motor1 is Left Motor
MeDCMotor motor2(M2);//Motor2 is Right Motor
MeRGBLed led(0,30);
void setup() {
  // put your setup code here, to run once:
led.setpin(13);

     pinMode(A7,INPUT);

     while(analogRead(A7) !=0) ; // Start code when button pushed
  led.setColorAt(0, 0, 255, 0);//Lime//
  led.setColorAt(1, 0, 255, 0);//Lime//
  led.show();
  motor1.run(100); // Can be an int from -255 to 255
  motor2.run(-100);
  delay(4500);
  motor1.stop();
  motor2.stop();
  led.setColorAt(0, 0, 255, 0);//Red
  led.setColorAt(1, 0, 255, 0);//Red
  led.show();
  delay(5000);
  led.setColorAt(0, 0, 255, 0);//Lime//
  led.setColorAt(1, 0, 255, 0);//Lime//
  led.show();
  motor1.run(0);
  motor2.run(-100);
  delay(1050);
  motor1.stop();
  motor2.stop();
  led.setColorAt(0, 255, 0, 0);//Red
  led.setColorAt(1, 255, 0, 0);//Red
  led.show();
  delay(800);
  led.setColorAt(0, 0, 255, 0);//Lime//
  led.setColorAt(1, 0, 255, 0);//Lime//
  led.show();
  motor1.run(100);
  motor2.run(-100);
  delay(3000);
  motor1.stop();
  motor2.stop();
  led.setColorAt(0, 255, 0, 0);//Red
  led.setColorAt(1, 255, 0, 0);//Red
  led.show();
  delay(5000);
  led.setColorAt(0, 0, 255, 0);//Lime//
  led.setColorAt(1, 0, 255, 0);//Lime//
  led.show();
  motor1.run(100);
  motor2.run(0);
  delay(1200);
  motor1.stop();
  motor2.stop();
  led.setColorAt(0, 255, 0, 0);//Red
  led.setColorAt(1, 255, 0, 0);//Red
  led.show();
  delay(5000);
  led.setColorAt(0, 0, 255, 0);//Lime//
  led.setColorAt(1, 0, 255, 0);//Lime//
  led.show();
  motor1.run(100);
  motor2.run(-100);
  delay(4500);
  motor1.stop();
  motor2.stop();
  led.setColorAt(0, 255, 0, 0);//Red
  led.setColorAt(1, 255, 0, 0);//Red
  led.show();
  delay(4000);
  led.setColorAt(0, 0, 255, 0);//Lime//
  led.setColorAt(1, 0, 255, 0);//Lime//
  led.show();
  motor1.run(-100);
  motor2.run(100);
  delay(4500);
  motor1.stop();
  motor2.stop();
  led.setColorAt(0, 255, 0, 0);//Red
  led.setColorAt(1, 255, 0, 0);//Red
  led.show();
  delay(2000);
  led.setColorAt(0, 0, 255, 0);//Lime//
  led.setColorAt(1, 0, 255, 0);//Lime//
  led.show();
  motor1.run(100);
  motor2.run(0);
  delay(3500);
  motor1.stop();
  motor2.stop();
  led.setColorAt(0, 255, 0, 0);//Red
  led.setColorAt(1, 255, 0, 0);//Red
  led.show();

  
  


  
  
  
  
  

  
  
    led.setColorAt(0, 0, 255, 0);//Lime//
    led.setColorAt(1, 0, 255, 0);//Lime//
    led.show();
    delay(500);
  
  
    led.setColorAt(0, 255, 255, 255);
    led.setColorAt(1, 255, 255, 255);
    led.show();
    delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
led.setColorAt(0, 0, 255, 0);//Red
    led.setColorAt(1, 0, 255, 0);//Red
    led.show();
    delay(500);
  
  
    led.setColorAt(0, 255, 255, 255);//white:right side
    led.setColorAt(1, 255, 255, 255);//white:right side
    led.show();
    delay(500); 
  
  
    
}
