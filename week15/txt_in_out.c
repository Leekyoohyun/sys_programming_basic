//
// Created by 이규현 on 2024. 12. 10..
//

/*
//ex 14-1
#include <stdio.h>
#include <stdlib.h>

int main(){
  int ch;
  FILE *src = fopen("from.txt", "rt"); //읽기 모드로 열었다
  FILE *dest = fopen("to.txt", "wt"); //쓰기 모드로 열었다

  while((ch = fgetc(src)) != EOF) //EOF -> end of file
        fputc(ch, dest);//ch를 dest에 쓰겠다.

  if(feof(src)) // feof(): EOF인지 아닌지 따짐. src의 끝까지 갔는지 확인
     printf("Copy complete\n");
  else
     printf("Error while copying\n");

  fclose(src);
  fclose(dest);

  return 0;
}
 */

/*
//ex 14-2
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  int ch;
  unsigned int num = 0;

  FILE *fp = fopen("from.txt", "rt");

  ch = fgetc(fp);
  while(isdigit(ch)) // isdigit : ch 가 0~9까지의 숫자면 true, 아니면 false를 반환
  {
    num = num * 10 + ch - '0';
    //ch == 82(문자 '2', '0' 코드값 80)82 = '0' == 82-80 = 2
    ch = fgetc(fp);
  }
  printf("Number is %d\n", num);

  fclose(fp);

  return 0;
}
 */

/*
//ex 14-3
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  char buff[100];

  FILE *src = fopen("from.txt", "r");
  FILE *dest = fopen("to.txt", "w");

  while(fgets(buff, sizeof(buff), src) != NULL)
    fputs(buff, dest);

  if(feof(src))
    printf("Copy complete\n");
  else
    printf("Error\n");

  fclose(src);
  fclose(dest);
  return 0;
}
 */

/*
//ex 14-4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  int id;
  char name[20];
} studentType;

int main(){
  int i, count = 0;

  studentType student, student2;

  FILE *dest = fopen("student.bin", "wb");

  student.id = 2023;
  strcpy(student.name, "James");

  count = fwrite(&student, sizeof(studentType), 1, dest);

  fclose(dest);

  FILE *src = fopen("student.bin", "rb");

  fread(&student2, sizeof(studentType), 1, src);
  printf("%d %s \n", student2.id, student2.name);
  fclose(src);

  return 0;
}
 */

//ex 14-5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *src  = fopen("from.txt", "r");

  printf("%d \n", ftell(src)); // 0

  fseek(src, -2, SEEK_END);
  printf("fp = %d \n", ftell(src)); //24
  //알파벳 26개중에 끝에서 두개 앞으로..
  printf("%c \n", fgetc(src));

  fseek(src, -2, SEEK_CUR);
  printf("fp = %d \n", ftell(src));
  printf("%c \n", fgetc(src));

  fseek(src, 3, SEEK_SET);
  printf("fp = %d \n", ftell(src));
  printf("%c \n", fgetc(src));

  rewind(src);

  printf("fp = %d \n", ftell(src));
  printf("%c \n", fgetc(src));

  fclose(src);

  return 0;
}