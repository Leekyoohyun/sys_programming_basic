//
// Created by 이규현 on 2024. 10. 10..
//
#include <stdio.h>
int main(){
  int score = 79;
  char grade;

  if(score >= 90){
    grade = 'A';
  }else{
    if(score >= 80){
      grade = 'B';
    }else{
      grade = 'F';
     }
   }
   printf("%c\n", grade);
  return 1;
}