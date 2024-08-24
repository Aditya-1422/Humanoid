#include<Servo.h>
Servo a;
void setup()
{
 a.attach(3); 
}

void loop()
{
 a.write(90);
 delay(1000);
  a.write(45);
 delay(1000);

  a.write(135);
 delay(1000);
}
