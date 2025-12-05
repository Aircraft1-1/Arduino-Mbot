  // put your setup code here, to run once:
#include <Arduino.h>
#include <MeMCore.h>
#include <stdbool.h>

MeDCMotor motor1(M1);//Motor1 is Left Motor
MeDCMotor motor2(M2);//Motor2 is Right Motor
MeLineFollower lineFinder(PORT_2);

void setup()

{

  Serial.begin(9600);

}

 

//black = blue light off = 0
//white = blue light on = 1

 

void loop()
{
  if (lineFinder.readSensor1()==0 && lineFinder.readSensor2()==0)
    {
      Serial.println("Sensor 1 on black and Sensor 2 on black");
      motor1.run(50);//Forward
      motor2.run(-50);
     /*delay(100);
      motor1.stop();
      motor2.stop();*/
    }
  else if (lineFinder.readSensor1()==1 && lineFinder.readSensor2()==0)

   {

     Serial.println("Sensor 1 on white and Sensor 2 on black");
      motor1.run(50);
      motor2.run(50);
      /*delay(100);
      motor1.stop();
      motor2.stop();*/
      motor1.run(0);//Right
      motor2.run(-50);
    }
  else if (lineFinder.readSensor1()==0 && lineFinder.readSensor2()==1)

    {

    Serial.println("Sensor 1 on Black and Sensor 2 on White");
      motor1.run(-50);
      motor2.run(-50);
      /*delay(100);
      motor1.stop();
      motor2.stop();*/
      motor1.run(50);//Left
      motor2.run(0);
    }
  else //(lineFinder.readSensor1()==1 && lineFinder.readSensor2()==1)

    {

    Serial.println("Sensor 1 on White and Sensor 2 on White");
      motor1.run(-50);//Backwards
      motor2.run(50);
      /*delay(100);
      motor1.stop();
      motor2.stop();*/
    }
delay(300);
}



