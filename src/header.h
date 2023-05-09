#include<Arduino.h>
#include<Servo.h>
void solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void test(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void LEFT_FLIP(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void FRONT_FLIP(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void BACK_FLIP(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void STARTUP(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void F_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void F1_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void F2_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void R_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void R1_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void R2_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void B_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void B1_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void B2_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void L_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void L1_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void L2_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void U_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void U1_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void U2_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void D_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void D1_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);
void D2_solve(Servo s1, Servo s2, Servo s3, Servo s4, Servo s5, Servo s6, Servo s7, Servo s8);