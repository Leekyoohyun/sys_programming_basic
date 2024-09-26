//
// Created by 이규현 on 2024. 9. 26..
//
#include <stdio.h>
int main(){
  char ch1, ch2;
  printf("Enter the first character.\n");
  scanf("%c", &ch1);
  printf("First character is %c\n", ch1);

  printf("Enter the second character.\n");
  //scanf("%c", &ch2);  //이렇게 하면 엔터를 읽어버려서 공백이 ch2에 들어감. 그래서 띄어쓰기 해줘야함
  scanf(" %c", &ch2);
  printf("Second character is %c\n", ch2);
  return 0;
}