//
// Created by 이규현 on 2024. 10. 20..
//
#include <stdio.h>
#include <Math.h>

//3-5
/*
int main() {
  short a = 32768; //2byte니까 16bit까지밖에 표현 못함 2^15-1까지
  int pow2 = pow(2,15)-1;
  printf("2^15-1: %d.\n", pow2);
  short b = a/2;
  float c = 1E45;
  float d = c/2.0;
  printf("a: %d, b: %d, c: %f, d: %f\n", a, b, c, d);
  return 0;
}
 */

//전위 후위 3-7
int main() {
  int a,b;

  a=0;
  a++;
  printf("a = %d.\n",a); // a = 1
  b = a++;
  printf("a = %d, b = %d.\n",a,b); // a = 2, b = 1

  a = 0;
  ++a;
  printf("a = %d.\n",a); // a = 1
  b = ++a;
  printf("a = %d, b = %d.\n",a,b); //a=2, b=2

  a = b = 0;
  printf("a = %d. b = %d.\n", (1+a++)+2, ++b); // a = 3, b = 1
  printf("a = %d. b = %d.\n",a,b); // a=1, b = 1

  return 0;
}