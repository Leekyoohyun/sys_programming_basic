//
// Created by 이규현 on 2024. 10. 4..
//

#include <stdio.h>
int main(){
  int a = 4, b = 3, c = 2, d = 1;

  printf("%d \n", (a>b) && (c>d)); //1
  printf("%d \n", (a<b) || (c>d)); //1
  printf("%d \n", (a<b) && (c>d)); //0
  printf("%d \n", (a>b) || (c>d)); //1
  printf("%d \n", (a<b || c>d) && (a == b && c>=d)); //0

  printf("%d \n", !(a>b));  //0
  printf("%d \n", !d); //0
  printf("%d \n", !a);  //0

  //c언어는 0이아닌 모든  값을 1로 취급(Non-Zero value)

  return 0;
}