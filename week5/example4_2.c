//
// Created by 이규현 on 2024. 10. 10..
//
#include <stdio.h>

int square(int m){
  int sq = m*m;
  return sq;
  //return m*m; 해도 됨.
}

int squareAdd(int first, int second){
  int total;

  total = square(first)+square(second);

  return total;
}

int main(){

  int first, second, sum;

  printf("Enter two integers:");
  scanf("%d%d", &first, &second);

  sum = squareAdd(first, second);

  printf("The result is: %d\n", sum);

  return 0;
}