#include <stdio.h>

int main(){
    float f; double d; int i;

    f = 0.123456789123456789F; //F를 붙여야 float으로 인식
    d = 0.123456789123456789; //Default인 double로 자동인식
    printf("float f is %f.\n", f);    // %f, %lf 모두 디폴트로 소수점 아래 6자리까지 찍는다.
    printf("double d is %lf.\n", d);
    printf("float in .20f is %.20f.\n", f);    // %.20f는 소수점 20자리까지 표현
    printf("double in .20lf is %.20lf.\n",d);
    printf("double in 25.4lf is\n%25.4lf.\n",d);
    printf("double in -25.4lf is\n%-25.4lf.\n",d);
    
    i = 365;
    printf("int in -8d is %-8d.\n",i);
    printf("Exponent from of 123456.78 is %e.\n", 123456.78);
    return 0;
}