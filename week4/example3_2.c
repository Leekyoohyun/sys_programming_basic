//
// Created by 이규현 on 2024. 9. 26..
//
#include <stdio.h>
int main(){
  int salary, bonus, total;

  salary = 400;
  bonus = 20;
  salary = salary + bonus;
  total = salary + bonus; //420+20
  printf("Total is, %d\n", total);

  bonus = salary + 400;
  printf("Bonus plus salary is, %d\n", bonus+salary);
  return 0;
}