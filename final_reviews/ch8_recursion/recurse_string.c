//
// Created by 이규현 on 2024. 11. 30..
//
#include <stdio.h>

void reverse_it(){
  char ch;
  scanf("%c",&ch);
  if(ch!='\n'){
    reverse_it();
    printf("%c",ch);
  }
}

int main(){
  reverse_it();
  printf("\n");
  return 0;
}