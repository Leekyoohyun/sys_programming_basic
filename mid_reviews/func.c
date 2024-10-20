//
// Created by 이규현 on 2024. 10. 20..
//
#include <stdio.h>

//function basic
int add(int a, int b){
  int total = a + b;
  return total;
}

int main() {
  int first, second;
  printf("Enter two number: \n");
  scanf("%d %d", &first, &second);
  int sum = add(first, second);
  printf("result is %d.\n", sum);
  return 0;
}