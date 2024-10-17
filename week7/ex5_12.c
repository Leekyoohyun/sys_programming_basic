//
// Created by 이규현 on 2024. 10. 17..
//
#include <stdio.h>

int main(){
  char ch;
  ch = 'c';

  switch(ch){
    case 'a':
      printf("%c. \n",ch);
      break;
    case 'b':
      printf("%c. \n",ch);
      break;
    case 'c':
      printf("%c. \n",ch);
      break;
    default:
      printf("End. \n", ch);
      break;
  }

  printf("Hello. \n",ch);
}