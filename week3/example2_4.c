//
// Created by 이규현 on 2024. 9. 26..
//
#include <stdio.h>
int main(){
  unsigned int age;
  long sum;
  unsigned long total;

  //age = 24; 이렇게 하면 signed int형으로 간주
  age = 24U; //U를 붙여줘야 unsigned로 알아먹음
  sum = 24L;
  total = 2024UL;

  printf("나이: %u\n 합: %l\n total: %u\n", age, sum,total);
  return 0;
}