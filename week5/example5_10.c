//
// Created by 이규현 on 2024. 10. 10..
//
#include <stdio.h>

int main(){
  int max = 0;

  if(max = 4)  // 조건식에 대입연산자 쓰면 안됨  Run time error!!
    printf("Yes.\n");
  else
    printf("No.\n");
  return 0;
}