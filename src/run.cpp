#include "header.h"
#include <Servo.h>
void solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
	int s1_init=5, s1_fin=105, s2_init=165, s2_fin=80, s3_init=10, s3_fin=100, s4_init=145, s4_fin=40,
	s5_init=5, s5_fin=100, s7_init=165, s7_fin=65, s6_init=110, s6_fin=0, s8_init=132, s8_fin=40,
	d=1000;
	s1.write(s1_init);
	s2.write(s2_init);
	s3.write(s3_init);
	s4.write(s4_init);
	s5.write(s5_init);
	s6.write(s6_init);
	s7.write(s7_init);
	s8.write(s8_init);
	while(true);
}
