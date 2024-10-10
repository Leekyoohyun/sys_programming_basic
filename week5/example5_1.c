//
// Created by 이규현 on 2024. 10. 10..
//
#include <stdio.h>
void odd_even(int num){
  if(num % 2 ==0)
    printf("Even number.\n");
  else
    printf("Odd number.\n");
}

int main(){

  int num;
  printf("Enter an integer.\n");
  scanf("%d", &num);
  odd_even(num);

  return 1;
}