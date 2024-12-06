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

/*
//ex12-7
#include <string.h>

void swap(char*, char*);
void permute(char*, int, int);

int main() {
  char str[] = "abc";
  printf("%d\n", strlen(str));
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
 */

/*
//ex 12-8
int main() {
  char str[128];

  printf("Enter: \n");
  scanf("%[A-Z]s", str); //대문자 A-Z 사이 문자만 읽음

  printf("String before lower case: %s\n", str);

  while(getchar() != '\n');
  printf("Enter: \n");
  scanf("%[^e]s",str); // 첫 e를 만나기 전까지 읽음
  printf("String before e is %s\n", str);

  while(getchar() != '\n');
  printf("Enter with space: \n");
  scanf("%[^\n]s",str); // \n만나기 전까지 읽음 이게 빈칸이 아님.
  printf("you entered %s\n", str);

  while(getchar() != '\n');
  printf("Enter with space: \n");
  gets(str); // 한줄 읽기 함수. Enter누르기 전까지 모든 문자 읽음.
  printf("you entered %s\n", str);
  return 0;
}
*/

/*
//ex 12-9
int main() {
  char str[10];
    printf("Enter a string: ");
    printf("\n");
  gets(str);
  puts(str);

  do{
    printf("Enter another string: \n");
    gets(str);
    puts(str);
  }while(*str != 0);

  printf("Enter a very Long string.\n");
  gets(str);
  printf("you entered, \n");
  puts(str);

  return 0;

}

 */

/*
//ex 12-10
#include <string.h>

int main() {
 char text[10];

 printf("Enter a text \n");
 fgets(text, sizeof(text), stdin);
 printf("you entered text: %s", text);
 printf(" It's length is %d\n", strlen(text)); //apple 입력시 length가 5여야 되는데 6임 null때매

 text[strlen(text) - 1] = '\0';
 printf("you entered text: %s\n", text);
 printf(" It's length is %d\n", strlen(text)); //이렇게 해야 5

 return 0;
}
*/

/*
//ex 12-11
int main() {
  char first[6], last[6];

  printf("Enter first name.\n");
  fgets(first, sizeof(first), stdin);

  //while(getchar() != '\n');
  printf("Enter last name.\n");
  fgets(last, sizeof(last), stdin);

  printf("Full name: \n");
  puts(first);
  puts(last);

  return 0;
}

 */

/*
//ex 12-12
#include <string.h>

int main() {
  char *str1 = "pine", *str2 = "apple";

  if(strlen(str1) - strlen(str2) >= 0)
    printf("yes\n");
  else
    printf("no\n");

  if(strlen(str1) > strlen(str2))
    printf("yes\n");
  else
    printf("no\n");

  if(((int)strlen(str1) - (int)strlen(str2)) >= 0)
    printf("yes\n");
  else
    printf("no\n");

  return 0;
}
*/

/*
//ex12-13
#include <string.h>

int main() {
  char str1[30], str2[10];

  printf("Enter a string: \n");
  gets(str1);
  printf("Enter a string: \n");
  gets(str2);

  printf("strlen(str1) = %d\n", strlen(str1));
  printf("strlen(str2) = %d\n", strlen(str2));

  if(strcmp(str1,str2) ==0)
    printf("%s and %s are equal\n", str1, str2);
  else if(strcmp(str1,str2) < 0)
    printf("%s is smaller than %s\n", str1, str2);
  else
    printf("%s is bigger than %s\n", str1, str2);

  printf("Before strcpy\n str1 = %s, str2 = %s\n", str1, str2);
  strcpy(str1, str2);
  printf("After strcpy\n str1 = %s, str2 = %s\n", str1, str2);

  printf("Before strcat\n str1 = %s, str2 = %s\n", str1, str2);
  strcpy(str1, str2);
  printf("After strcat\n str1 = %s, str2 = %s\n", str1, str2);

  printf("%s \n", strcat(str1, "OMG!"));

  return 0;
}
*/

/*
//ex 12- 14
int my_strlen(const char *str){
  int i;
  for(i=0; str[i] != '\0'; i++);
  return i;
}

int main(){
  char text[30];
  printf("Enter a text \n");
  gets(text);

  printf("Length of text is %d \n", my_strlen(text));

  return 0;
}
*/

/*
//ex 12- 15
int recursive_strlen(const char *str){
  if(*str == '\0')
    return 0;
  else
    return (1+recursive_strlen(++str));
}

int main(){
  char text[30];
  printf("Enter a string: \n");
  gets(text);
  printf("Lent: %d\n",recursive_strlen(text));
  return 0;
}
*/

/*
//ex 12-16
char* my_strcpy(char *dest, char *src) {
  int i = 0;
  while((dest[i] = src[i]) != '\0')
    i++;
  return dest;
}

int main(){
  char dest[30], src[10];

  printf("Enter desination string\n");
  gets(dest);
  printf("Enter source string\n");
  gets(src);

  printf("On strcpy(dest, src), dest became %s\n", my_strcpy(dest, src));

  return 0;
}
*/

/*
//ex 12-17
char* mystrcpy(char *dest, const char *src){
  char* backup = dest;
  while(*src != '\0'){
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
  return backup;
}

int main(){
  char dest[30], src[10];

  printf("Enter a string: \n");
  gets(dest);
  printf("Enter another string: \n");
  gets(src);

  printf("strcpy(dest, src) -> %s \n", mystrcpy(dest, src));

  return 0;
}
 */

/*
//ex 12-18
#include <string.h>

int main() {
  char *here, *there;
  char text[] = "This is first. This is second. This is third.";
  const char ch='.';

  here = strchr(text, ch);
  printf("Text after the first period is, %s\n", (here+2));

  strcpy(text, "It is a right answer.");
  there = strstr(text, "right");
  strncpy(there, "wrong", 5);
  puts(text);

  return 0;
}

 */

/*
//ex 12- 19
int main() {
  char str[100];

  char* name = "Lee eun";
  int age = 19;
  double weight = 58.5;

  char *first = "First line of a long string. ";
  char *second = "Second line of a long string. ";

  sprintf(str, "Name: %s, Age: %d, Weight: %lf.", name, age, weight);
  puts(str);

  sprintf(str, "%s %s", first, second);
  puts(str);

  return 0;
}
 */

//ex 12-20
#include <string.h>

int main() {
  char str[] = "J.Park Seoul 010-2222-3456";

  char *p = strtok(str, " ");
  while(p != NULL){
    printf("%s\n", p);
    p = strtok(NULL, " ");
  }

  return 0;
}