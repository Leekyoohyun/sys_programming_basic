//
// Created by 이규현 on 2024. 12. 6..
//
#include <stdio.h>
#include <stdlib.h>

/*
//ex 12-1
int main() {
  char *p = "apple";
  char str[20];
  int i;

  printf("*p: %c\n", *p); // a
  printf("last character: %c\n", *(p +4));
  printf("last character: %c\n", *("apple" +4)); //똑같음

  printf("Enter: \n");
  scanf("%s", str);

  printf("%s\n", str);
  for(i = 0; str[i] != 0;i++)
    printf("%c", str[i]);
  printf("\n");

  return 1;
}
*/

/*
//ex 12-2
#include <string.h>

int main() {
  char * str1 = "Okay Buddy";
  char str2[15] = "Bless you.";

  printf("strlen(str1): %d.\n", strlen(str1));
  printf("strlen(str2): %d.\n", strlen(str2));
  printf("sizeof(str1): %d.\n", sizeof(str1)); //str1은 포인터 변수라서 포인터의 크기는 시스템의 주소 크기에 따라 결정됨.
  printf("sizeof(str2): %d.\n", sizeof(str2));

  return 1;
}
*/

/*
//ex 12-3
int main() {
  char str1[10] = "apple";
  char* str2 = "apple";

  str1[4] = 'y';
  printf("%s\n", str1);

  str2 = "pie";
  printf("%s\n", str2);

  //str2[4] = 'y'; //실행 오류(crash)
  //str1 = "peach"; // 컴파일 오류(좌변이 상수)

  return 0;
}
 */

/*
//ex 12-4
char* get_apple(){
  char* p = "apple";
  return p;
}

int main(){
  char* str = get_apple();
  printf("%s\n", str);

  return 1;
}

 */

/*
//ex12-5
#define MAX 15
int main() {
  char ch, str[MAX];
  int i;

  printf("Enter a sentence to reverse\n");
  for(i = 0; (ch = getchar()) != '\n'; i++)
    str[i] = ch;
  str[i] = 0;

  for(--i; i>=0; i--)
    putchar(str[i]);

  return 1;
}
 */

/*
//ex 12-6
#define MAXCHAR 20
#include<ctype.h> // for islower, toupper

char* read_line(){//입력문장을 text 배열에 넣고 시작 주소를 돌려준다.
  char ch;
  int i;
  static char text[MAXCHAR];
  //함수를 빠져나가도 사라지지 않게 하기 위해 정적 변수로 선언

  printf("Enter a sentence.\n");
  for(i=0; (ch = getchar()) != '\n'; i++){
    text[i] = ch;
  }
  text[i] = '\0';

  return text;
}

int main(){
  int i;
  char* p = read_line();

  for(i = 0; p[i] != 0; i++){
    if(islower(p[i]))
      p[i] = toupper(p[i]);
    putchar(p[i]); //
  }

  printf("\n");

  return 0;
}

 */

//ex12-7
#include <string.h>

void swap(char*, char*);
void permute(char*, int, int);

int main() {
  char str[] = "abc";
  permute(str, 0, strlen(str)-1); // 1

  return 0;
}

void swap(char* x, char* y){
  char temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void permute(char* s, int left, int right){ // 2
  int i;
  if(left == right) //3
    printf("%s\n", s);
  else{
    for(i = left; i<=right; i++){ //4
      swap(s+left, s+i); //5
      permute(s, left, right); // 6 -> 재귀로 순열 구함
      swap(s+left, s+i); // 7 백트래킹
    }
  }
}