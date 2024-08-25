#include<Servo.h>

Servo a;
Servo b;
Servo c;
Servo d;
Servo e;
Servo f;
Servo g;
Servo h;
Servo i;

void setup()
{
 a.attach(3);
 b.attach(4);
 c.attach(5);
 d.attach(6);
 e.attach(7);
 f.attach(8);
 g.attach(9);
 h.attach(10);
 i.attach(11); 
}

void loop()
{
  //FOR HEAD MOVEMENT
  a.write(0);
  delay(1000);
  a.write(90);
  delay(1000);
  a.write(180);
  delay(1000);
  a.write(90);
  delay(1000);
  a.write(0);
  delay(1000);

  //FOR ARM MOVEMENT
  b.write(0);
  c.write(0);
  delay(1000);
  b.write(90);
  c.write(90);
  delay(1000);
  b.write(45);
  c.write(45);
  delay(1000);
  
  //FOR ELBOW MOVEMENT
  d.write(0);
  e.write(0);
  delay(1000);
  d.write(90);
  e.write(90);
  delay(1000);
  d.write(45);
  e.write(45);
  delay(1000);

  //FOR LEG MOVEMENT
  f.write(0);
  g.write(0);
  delay(1000);
  f.write(90);
  g.write(90);
  delay(1000);
  f.write(45);
  g.write(45);
  delay(1000);

  //FOR FOOT MOVEMENT
  h.write(0);
  i.write(0);
  delay(1000);
  h.write(90);
  i.write(90);
  delay(1000);
  h.write(45);
  i.write(45);
  delay(1000);
}
