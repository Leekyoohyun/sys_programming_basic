//
// Created by 이규현 on 2024. 11. 30..
//
//return; 하나로 아무 일도 하지말고 빠져나와라씀
#include <stdio.h>

/*
void reverse(int n){
  if(n==0)
    return;
  else{
    printf("%d",n%10);
    reverse(n/10);
  }
}

int main(){
  int num;
  scanf("%d",&num);
  reverse(num);
  printf("\n");

  return 0;
}
*/

void reverse(int n){
  if(n!=0){
    printf("%d ",n%10);
    reverse(n/10);
  }
}

int main(){
  int num;
  scanf("%d",&num);
  reverse(num);
  printf("\n");
  return 0;
}