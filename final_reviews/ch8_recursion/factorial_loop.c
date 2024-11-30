//
// Created by 이규현 on 2024. 11. 30..
//
#include <stdio.h>

int factorial(int n){
  int i, fact = 1;
  for(i = n; i>0; i--){
    fact *= i;
  }
  return fact;
}

int main(){
  int num;
  scanf("%d", &num);
  printf("factorial of %d is %d",num, factorial(num));
  printf("\n");
  return 0;
}