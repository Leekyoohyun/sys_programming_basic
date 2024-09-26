//
// Created by 이규현 on 2024. 9. 26..
//
#include <stdio.h>
int main(){
  char ch1, ch2;
  printf("Enter two characters.\n ");
  scanf("%c %c", &ch1, &ch2); //scanf는 공백 생각해야함 꼭!!
  printf("Characters just read are %c and %c.\n", ch1, ch2);
  return 0;
}