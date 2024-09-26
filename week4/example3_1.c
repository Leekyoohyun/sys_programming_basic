//
// Created by 이규현 on 2024. 9. 26..
//
#include <stdio.h>
int main(){
  int my_age, your_age;
  int her_age = 20;

  my_age = her_age+1; //21
  printf("My age is %d\n", my_age);

  my_age = your_age+1; //오류
  printf("My age is %d\n", my_age);
  return 0;
}