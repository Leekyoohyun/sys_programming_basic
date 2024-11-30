//
// Created by 이규현 on 2024. 11. 30..
//
#include <stdio.h>

void recurse(int n){
  if(n==0)
    return;
  else{
    recurse(n-1);
    printf("%d ",n);
  }
}

int main(){
  int num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  recurse(num);

  return 0;
}