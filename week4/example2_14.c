//
// Created by 이규현 on 2024. 9. 26..
//
#include <stdio.h>
int main(){
  unsigned char ch; int num;

  printf("Enter a character.\n");
  scanf("%c", &ch); // 숫자 7 입력--> 문자 "7"로 읽힘
  printf("It is %d in decimal.\n", ch); //7의 아스키코드 55 출력
  printf("Enter the same character again.\n");
  scanf("%d", &num); //이번에는 %d에 의해 atoi함수가 호출되어 문자 "7"이 숫자 7로 변환.
  printf("It is %d in decimal.\n", num);
  fprintf(stdout, "Hello, World!\n");
  printf("Hello, World!\n");
  return 0;
}
