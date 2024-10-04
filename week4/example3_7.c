//
// Created by 이규현 on 2024. 10. 4..
//

#include <stdio.h>
int main(){
  int a,b;

  a = 0;
  a++;
  printf("a = %d.\n",a); // a = 1
  b= a++; //a++이 후위 연산자 --> 'b에 a를 대입한 다음에 a를 증가시켜라'
  printf("a = %d. b = %d.\n",a,b); // a=2. b=1

  a = 0;
  ++a;
  printf("a = %d.\n",a); // a=1
  b = ++a; // a를 증가 시킨 후에 b에 대입해라.
  printf("a = %d. b = %d.\n",a,b); // a =2. b=2

  a = b = 0;
  printf("a = %d. b = %d.\n", (1+a++)+2, ++b); // a=3.b=1
  printf("a = %d. b = %d.\n", a,b); //a=1. b=1

  a=b=0;
  printf("a=%d. b=%d.\n",1+(++a)+2,b++);
  return 0;
}
