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

/*
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
*/

/*
//ex8-10
void swap(int m, int n){
  int temp;
  printf("Before swap, m = %d and n = %d\n", m, n);
  temp = m;
  m = n;
  n = temp;
  printf("After swap, m = %d and n = %d\n", m, n);
  return;
}

int main(){
  int a = 10, b = 20;
  printf("Before calling ft, a = %d, b = %d\n", a, b);
  swap(a, b);
  printf("After calling ft, a = %d, b = %d\n", a, b);

  return 0;
}
*/

/*
//ex8-11
// inline 함수는 스택프레임 없이 main안에서 굴러가
inline int add(int a, int b)
{
  return a + b;
}

int main()
{
  int sum, first = 10, second = 20;
  sum = add(first, second);
  printf("sum is %d.\n", sum);

  return 0;
}
*/

/*
//ex 8-12
int power2(int num, int power)
{
  __asm{
    mov eax, num;
    mov ecx, power;
    shl eax, cl;
  }
}

int main(void)
{
  printf("3 times (2 to the 5) is %d.\n", power2(3,5));
  return 0;
}
*/

/*
//ex 8-13
#include <stdarg.h>

int find_min(int count, ...)
{
  int min, temp, i;
  va_list(p);
  va_start(p, count);
  min = va_arg(p,int);
  for (i=2; i<=count; i++)
  {
    temp = va_arg(p,int);
    if (temp < min)
      min = temp;
  }

  va_end(p);

  return min;
}

int main()
{
  int arg_count = 3;
  printf("Minimum is %d.\n", find_min(arg_count, 30,20,10));

  return 0;
}
*/

/*
//ex8-14
int factorial(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return (n*factorial(n-1));
  }
}

int main()
{
  int num;
  printf("Enter positive integer: \n");
  scanf("%d", &num);
  printf("Factorial of %d is %d.\n",num,factorial(num));
}
*/

/*
//ex8-15
void recurse(int n)
{
  if (n == 0)
    return;
  else
  {
    printf("%d ",n);
    recurse(n-1);
  }
}

int main()
{
  int num;
  printf("Enter a number: \n");
  scanf("%d", &num);
  recurse(num);

  return 0;
}
*/

/*
//ex 8-16
void recurse(int n)
{
  if (n == 0)
    return;
  else
  {
    recurse(n-1);
    printf("%d ",n);
  }
}

int main()
{
  int num;
  printf("Enter a positive integer: \n");
  scanf("%d", &num);
  recurse(num);

  return 0;
}

//https://velog.io/@khyhlee/Algorithm1-Recursion-Ft
*/

/*
//ex 8-17
void recurse(int n)
{
  if (n==0)
    return;
  else
  {
    printf("%d", n%10);
    recurse(n/10);
  }
}

int main()
{
  int num;

  printf("Enter a number: \n"); //1234
  scanf("%d", &num);
  recurse(num);
  printf("\n");

  return 0;
}
*/

/*
//ex 8-18
void recurse(int n)
{
  if (n!=0)
  {
    printf("%d", n%10);
    recurse(n/10);
  }
}

int main()
{
  int num;
  printf("Enter a number: \n");
  scanf("%d", &num);
  recurse(num);
  printf("\n");

  return 0;
}
*/

/*
//ex 8-19 10진수 2진수변환
void to_binary(int n)
{
  if (n!=0)
  {
    to_binary(n/2);
    printf("%d",(n%2));
  }
}

int main()
{
  int num;
  printf("Enter a number: \n");
  scanf("%d",&num);
  to_binary(num);
  printf("\n");

  return 0;
}
*/

/*
//ex8-20 문자열 역순 출력

void reverse_it()
{
  char ch;
  scanf("%c", &ch);
  if (ch == '\n')
    return;
  else
  {
    reverse_it();
    printf("%c", ch);
  }
}

int main()
{
  printf("Enter a sentence:\n");
  reverse_it();
  printf("\n");

  return 0;
}
*/

/*
//ex 8-21 피보나치
int fib(int n)
{
  if (n<3)
    return 1;
  else
    return (fib(n-1)+fib(n-2));
}

int main()
{
  int num;
  printf("Enter a number: \n");
  scanf("%d", &num);
  printf("The %d th fibonacci sequence is: %d\n", num,fib(num));

  return 0;
}
*/

/*
//ex 8-22 실행시간이 긴 fib
long long fib(long long n)
{
  if (n<3)
    return 1;
  else
    return (fib(n-1)+fib(n-2));
}

int main()
{
  long long num;
  printf("Enter a number: \n");
  scanf("%lld",&num);
  printf("%lldth fibonacci number: %lld\n", num, fib(num));

  return 0;
}
*/

// ex 8-23

int factorial(int n)
{
  int i,fact = 1;
  for (i = n; i>0; i--)
    fact *= i;

  return fact;
}

int main()
{
  int num;
  printf("Enter a number: \n");
  scanf("%d", &num);
  printf("The factorial of %d is %d\n", num, factorial(num));

  return 0;
}