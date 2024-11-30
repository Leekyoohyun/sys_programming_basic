//
// Created by 이규현 on 2024. 11. 30..
//
#include <stdio.h>
void to_binary(int n){
  if(n!=0){
    to_binary(n/2);
    printf("%d",n%2);
  }
}

int main(){
  int num;
  scanf("%d",&num);
  to_binary(num);
  printf("\n");
  return 0;
}