//
// Created by 이규현 on 2024. 10. 17..
//
#include <stdio.h>
int main(){
  char ch;
  ch = 'A';

  switch(ch){
    case 'A':
      printf("Excellent. \n");
      break;
    case 'B':
      printf("Good. \n");
      break;
    case 'C':
      printf("Not bad. \n");
      break;
    default:
      printf("End. \n");
      break;
  }
  printf("Hello. \n");

  int score;
  score = 65;

  int grade = score/10;
  switch(grade){
    case 10: //100점

    case 9:  //90점대
      printf("Grade A. \n");
      break;
    case 8: //80점대
      printf("Grade B. \n");
      break;
    case 7:
      printf("Grade C. \n");
      break;
    default:
      printf("Grade F. \n");
      break;
  }
}