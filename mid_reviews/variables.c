//
// Created by 이규현 on 2024. 10. 20..
//
#include <stdio.h>

//Unsigned Ex1
/*
int main(){
  unsigned int age;
  age = 28U;
  printf("age = %d\n", age);
  return 0;
}
 */

/*
int main() {
  float area;
  double total;
  area = 0.1234567;
  printf("area is %f.\n", area);
  total = 0.1234567;
  printf("total is %f.\n", total);
  total = 0.1234567F;
  printf("total is %lf.\n", total);
  printf("%d\n",sizeof(double));
  return 0;
}
 */


//Type 변환 예제
/*
int main() {
  short width; int height; float area;
  double total; int length; short num1, num2, sum;
  width = (short)10;    //short width
  height = 5;           //int height
  area = 100.0F;        //float area

  total = area + width * height; // double total
  printf("Total is %lf.\n", total);

  length = 3.14;    // int length
  printf("Length is %d.\n", length);

  length = (int)3.14;    // int length
  printf("Length is %d.\n", length);

  num1 = (short)10; num2 = (short)20;
  printf("sizeof(num1+num2) is %d.\n", sizeof(num1+num2));
  printf("sizeof(\'a\' - \'A\') is %d.\n",sizeof('a'-'A'));

  sum = num1 + num2;
  printf("sizeof sum is %d.\n", sizeof(sum));

  return 0;
}
 */

/*
int main() {
  char ch;

  ch = 'a';

  printf("sizeof(ch) is %d.\n", sizeof(ch));
  printf("sizeof('a') is %d.\n", sizeof('a'));

  printf("\'a\' in character format is %c.\n",ch);
  printf("\'a\' in decimal format is %d.\n", ch);

  ch = 'a'+1;
  printf("\'a\'+1 in character format is %c.\n",ch);

  ch = 97;
  printf("97 in charater format is %c.\n",ch);

  return 0;
}
 */

/*
int main() {
  int age, count; double weight, height;

  printf("Enter age.\n");
  scanf("%d", &age);
  printf("Age : %d.\n", age);
  printf("Enter weight and height.\n");
  scanf("%lf %lf", &weight, &height);
  printf("weight: %lf, height: %lf\n", weight, height);

  count = scanf("%lf %lf", &weight, &height);
  printf("scanf returns %d.\n", count);

  return 0;
}
 */

int main() {
  unsigned char ch;
  int num;

  printf("Enter a character.\n");
  scanf("%c", &ch);
  printf("It is %d in decimal.\n", ch);
  printf("Enter the same character again.\n");
  scanf("%d", &num);
  printf("It is %d in decinal.\n", num);
  return 0;
}