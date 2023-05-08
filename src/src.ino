#include "header.h"
#include<Servo.h>
Servo s1, s2, s3, s4, s5, s6, s7, s8;
void setup()
{
  s1.attach(6);
  s2.attach(7);
  s3.attach(8);
  s4.attach(9);
  s5.attach(10);
  s6.attach(11);
  s7.attach(12);
  s8.attach(13);
}
void loop()
{
    solve(s1, s2, s3, s4, s5, s6, s7, s8);
    while(true);
}