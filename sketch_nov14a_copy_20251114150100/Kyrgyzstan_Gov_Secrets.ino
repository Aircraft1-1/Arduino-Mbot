#include <MeMCore.h>
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
    motor1.run(50);
    motor2.run(-50);
    {
      Serial.println("Sensor 1 on black and Sensor2 on black");
    }
  else if (lineFinder.readSensor1()==1 && lineFinder.readSensor2()==0)
   {
     Serial.println("Sensor 1 on white and Sensor 2 on black");
    }
  else if (lineFinder.readSensor1()==0 && lineFinder.readSensor2()==1)
    {
    Serial.println("Sensor 1 on Black and Sensor 2 on White");
    }
  else //(lineFinder.readSensor1()==1 && lineFinder.readSensor2()==1)
    {
    Serial.println("Sensor 1 on White and Sensor 2 on White");
    }
delay(1000);
}