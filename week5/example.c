//
// Created by 이규현 on 2024. 10. 10..
//
#include <stdio.h>
int function(int x, int y);  // 함수 선언 -> 컴파일러에게 알려주는 것.

int main() {
  int result = function(3,4);

  printf("%d\n", result);

  return 1;
}

int function(int x, int y){
  int z = x + y;
  return z;
}

