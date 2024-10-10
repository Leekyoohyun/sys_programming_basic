//
// Created by 이규현 on 2024. 10. 10..
//
#include <stdio.h>

int add(int a, int b){
  int total;
  total = a+b;
  return total;
}

int main(){
  int first, second, sum;
  printf("Enter two input integers. \n");
  scanf("%d%d", &first, &second);
  sum = add(first,second);
  printf("The result is %d\n", sum);
  return 0;
}
