//
// Created by 이규현 on 2024. 10. 10..
//
#include <stdio.h>
int main(){

  int first, second;
  first = 20;
  second = 30;

  if(first>second){
    printf("first is larger than second\n");
  }else if(first<second){
    printf("%d is larger than %d\n",second, first);
  }else{
    printf("first is equal to second\n");
   }

  return 1;
}