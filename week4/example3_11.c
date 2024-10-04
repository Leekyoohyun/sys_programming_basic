//
// Created by 이규현 on 2024. 10. 4..
//

#include <stdio.h>
int main(){
  int a =105, b = 32;
  printf("105 Modulo 32 is %d.\n", a % b);
  printf("105 bitwise AND 31 is %d.\n", a & (b-1));
  return 0;
}