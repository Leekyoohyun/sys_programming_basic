//
// Created by 이규현 on 2024. 11. 30..
//
#include <stdio.h>

int fibonacci(int n){
  if(n<3)
    return 1;
  else{
    return (fibonacci(n-1) + fibonacci(n-2));
  }
}

int main(){
  int num;
  scanf("%d", &num);
  printf("%dth fibonacci number: %d",num, fibonacci(num));
  printf("\n");

  return 0;
}