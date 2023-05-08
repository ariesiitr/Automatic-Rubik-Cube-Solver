#include "header.h"
#include <Servo.h>
int s1_init = 5, s1_fin = 108, s2_init = 170, s2_fin = 70, s3_init = 5, s3_fin = 105, s4_init = 145, s4_fin = 40,
    s5_init = 0, s5_fin = 100, s7_init = 167, s7_fin = 60, s6_init = 110, s6_fin = 0, s8_init = 132, s8_fin = 40,
    d = 2000;
void test(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    // code to test
}
void LEFT_FLIP(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    int d1 = 1000;
    int s1_fin_func = 105;
    s2.write(s2_fin);
    delay(d1);
    s1.write(s1_fin_func);
    delay(d1);
    s2.write(s2_init);
    delay(d1);
    s4.write(s4_fin);
    s8.write(s8_fin);
    delay(d1);
    s5.write(95);
    s1.write(s1_init);
    delay(d1);
    s4.write(s4_init);
    s8.write(s8_init);
    delay(d1);
    s6.write(s6_fin);
    delay(d1);
    s5.write(5);
    delay(d1);
    s6.write(s6_init);
    delay(d1);
}
void FRONT_FLIP(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    int d1 = 1000;
    s4.write(s4_fin);
    s8.write(s8_fin);
    delay(d1);
    s3.write(100);
    s7.write(65);
    delay(d1);
    s4.write(s4_init);
    s8.write(s8_init);
    delay(d1);
    s2.write(s2_fin);
    s6.write(s6_fin);
    delay(d1);
    s3.write(10);
    s7.write(165);
    delay(d1);
    s2.write(s2_init);
    s6.write(s6_init);
    delay(d1);
}
void BACK_FLIP(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    int d1 = 1000;
    s2.write(s2_fin);
    s6.write(s6_fin);
    delay(d1);
    s3.write(100);
    s7.write(65);
    delay(d1);
    s2.write(s2_init);
    s6.write(s6_init);
    delay(d1);
    s4.write(s4_fin);
    s8.write(s8_fin);
    delay(d1);
    s3.write(10);
    s7.write(165);
    delay(d1);
    s4.write(s4_init);
    s8.write(s8_init);
    delay(d1);
}
void STARTUP(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    int d1 = 1000;
    LEFT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    s8.write(0);
    delay(5000);
    s8.write(s8_init);
    delay(d1);
    // WHITE CAPTURE
    LEFT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    s8.write(0);
    delay(5000);
    s8.write(s8_init);
    delay(d1);
    // BLUE CAPTURE
    LEFT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    s8.write(0);
    delay(5000);
    s8.write(s8_init);
    delay(d1);
    // YELLOW CAPTURE
    LEFT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    s8.write(0);
    delay(5000);
    s8.write(s8_init);
    delay(d1);
    // GREEN CAPTURE
    BACK_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    LEFT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    s8.write(0);
    delay(5000);
    s8.write(s8_init);
    delay(d1);
    // RED CAPTURE
    LEFT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    LEFT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    s8.write(0);
    delay(5000);
    s8.write(s8_init);
    delay(d1);
    // ORANGE CAPTURE
    LEFT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    FRONT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    // FINAL POSITION
}
void F_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    s1.write(s1_fin);
    delay(d);
    s2.write(s2_fin);
    delay(d);
    s1.write(s1_init);
    delay(1000);
    s2.write(s2_init);
    delay(d);
}
void F1_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    s2.write(s2_fin);
    delay(d);
    s1.write(s1_fin);
    delay(1000);
    s2.write(s2_init);
    delay(d);
    s1.write(s1_init);
    delay(d);
}
void F2_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    F_solve(s1, s2, s3, s4, s5, s6, s7, s8);
    F_solve(s1, s2, s3, s4, s5, s6, s7, s8);
}
void R_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    s3.write(s3_fin);
    delay(d);
    s4.write(s4_fin);
    delay(d);
    s3.write(s3_init);
    delay(1000);
    s4.write(s4_init);
    delay(d);
}
void R1_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    s4.write(s4_fin);
    delay(d);
    s3.write(s3_fin);
    delay(1000);
    s4.write(s4_init);
    delay(d);
    s3.write(s3_init);
    delay(d);
}
void R2_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    R_solve(s1, s2, s3, s4, s5, s6, s7, s8);
    R_solve(s1, s2, s3, s4, s5, s6, s7, s8);
}
void B_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    s5.write(s5_fin);
    delay(d);
    s6.write(s6_fin);
    delay(d);
    s5.write(s5_init);
    delay(1000);
    s6.write(s6_init);
    delay(d);
}
void B1_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    s6.write(s6_fin);
    delay(d);
    s5.write(s5_fin);
    delay(1000);
    s6.write(s6_init);
    delay(d);
    s5.write(s5_init);
    delay(d);
}
void B2_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    B_solve(s1, s2, s3, s4, s5, s6, s7, s8);
    B_solve(s1, s2, s3, s4, s5, s6, s7, s8);
}
void L_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    s8.write(s8_fin);
    delay(d);
    s7.write(s7_fin);
    delay(1000);
    s8.write(s8_init);
    delay(d);
    s7.write(s7_init);
    delay(d);
}
void L1_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    s7.write(s7_fin);
    delay(d);
    s8.write(s8_fin);
    delay(d);
    s7.write(s7_init);
    delay(1000);
    s8.write(s8_init);
    delay(d);
}
void L2_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    L1_solve(s1, s2, s3, s4, s5, s6, s7, s8);
    L1_solve(s1, s2, s3, s4, s5, s6, s7, s8);
}
void U_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    FRONT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    F_solve(s1, s2, s3, s4, s5, s6, s7, s8);
    BACK_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
}
void U1_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    FRONT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    F1_solve(s1, s2, s3, s4, s5, s6, s7, s8);
    BACK_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
}
void U2_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    FRONT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    F2_solve(s1, s2, s3, s4, s5, s6, s7, s8);
    BACK_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
}
void D_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    BACK_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    F_solve(s1, s2, s3, s4, s5, s6, s7, s8);
    FRONT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
}
void D1_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    BACK_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    F1_solve(s1, s2, s3, s4, s5, s6, s7, s8);
    FRONT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
}
void D2_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8)
{
    BACK_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
    F2_solve(s1, s2, s3, s4, s5, s6, s7, s8);
    FRONT_FLIP(s1, s2, s3, s4, s5, s6, s7, s8);
}