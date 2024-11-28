//
// Created by 이규현 on 2024. 11. 28..
//

#include <stdio.h>

//example_8-1.c
/*#include <stdio.h>
int square(int m){
  return m*m;
}

int sq_add(int f, int s){
  int total;
  total = square(f)+square(s);
  return total;
}

int main(){
  int first, second, sum;
  printf("Enter first two integers: \n");
  scanf("%d%d", &first, &second);
  sum = sq_add(first, second);
  printf("The result is %d.\n",sum);

  //main -> sq_add -> square -> sq_add -> square -> sq_add -> main

  return 0;
}
*/

/*
//example_8-2.c
#include <stdio.h>

void try(int a, int b){
  printf("Inside try, a at %p, b at %p.\n", &a, &b);
  printf("Inside try, a = %d, b = %d.\n", a, b);
  a++;
  b++;
  printf("Upon increasing, a=%d, b=%d.\n\n", a, b);

  return;
}

int main(){
  int one =1, two =2;
  printf("In main, one at %p, two at %p.\n", &one, &two);
  printf("In main, one = %d, two = %d.\n", one, two);

  try(one, two);

  printf("Back to main, one at %p, two at %p.\n", &one, &two);
  printf("Back to main, one = %d, two = %d.\n", one, two);

  return 0;
}
*/

/*
//ex 8-3
#include <stdio.h>

void sum_up(int n){
  int sum = 0;
  sum += n;
  printf("Accumulated sum is %d.\n", sum);
}

int main(){
  int num, i;
  for(i=1; i<4; i++){
    printf("Enter an integer: \n");
    scanf("%d", &num);
    sum_up(num);
  }

  return 0;
}
*/

/*
//ex8-4
#include <stdio.h>

int sum;

void sum_up(int n){
  sum += n;
  printf("Accumulated sum is %d\n", sum);
}

int main(){
  int num, i;

  for(i=1; i<4; i++){
    printf("Enter number.\n");
    scanf("%d", &num);
    sum_up(num);
  }

  printf("Finally, the sum is %d.\n", sum);

  return 0;
}
*/

/*
//ex8-5
#include <stdio.h>

int main(){
  int i = 1;
  {
    printf("printing from 1 to 3.\n");
    int count = i;
    while(count < 4)
      printf("%d ", count++);
    printf("\n");
    printf("%d\n", count);
  }

  //printf("%d\n", count); //블록 밖에서 호출하면 안댐
  return 0;
}
*/

/*
//ex8-6
#include <stdio.h>

void sum_up(int n){
  static int sum = 0; //지역변수인 sum을 정적변수로 만들어라
  //이 결과 컴파일러는 sum을 스택프레임이 아닌 데이터 세그먼트에 저장한다.
  sum += n;
  printf("Accumulated sum is : %d.\n", sum);
}

int main(){
  int num, i;

  for(i=1; i<4; i++){
    printf("Enter number.\n");
    scanf("%d", &num);
    sum_up(num);
  }

  return 0;
}
*/

/*
//ex8-7
int a; double b; char c;

int main(){
  static int d;
  int e;

  printf("%d, %lf, %x, %d\n", a, b, c, d);
  //printf("%d\n", e);

  return 0;
}
 */

/*
//ex8-8
void increment(int m){
  m++;
  printf("Inside ft, m is %d.\n", m);
  return;
}

int main(){
  int a = 10;
  printf("Before calling ft, a = %d.\n", a);
  increment(a);
  printf("After calling ft, a = %d.\n", a);

  return 0;
}
 */

//ex8-9
int increment(int m){
  m++;
  printf("Inside ft, m is %d.\n", m);

  return m;
}

int main(){
  int a = 10;
  printf("Before calling ft, a is %d.\n", a);
  a = increment(a);
  printf("After calling ft, a is %d.\n", a);

  return 0;
}