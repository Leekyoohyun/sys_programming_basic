//
// Created by 이규현 on 2024. 11. 30..
//
#include <stdio.h>

int main() {
  int num;
  int * p;
  p = &num;
  *p = 10;

  printf("*p = %d\n", *p);
  printf("num = %d\n", num);
  printf("&num = %p\n", &num);
  printf("&p = %p\n", &p);
  printf("p = %p\n", p);
}