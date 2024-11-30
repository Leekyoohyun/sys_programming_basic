//
// Created by 이규현 on 2024. 11. 30..
//

#include <stdio.h>
#define MAX 200

int main(){
  int i, num;
  int fib[MAX];

  printf("Enter a number for fib: \n");
  scanf("%d", &num);

  fib[0] = 1;
  fib[1] = 1;
  for(i = 2; i<=num; i++){
    fib[i] = fib[i-1] + fib[i-2];
  }
  printf("%dth fib number is %d\n", num, fib[num-1]);
  return 0;
}