//
// Created by com on 2024-11-29.
//
#include <stdio.h>

/*
//ex 10-1
int main() {
  int num, *p;

  p = &num; //p에 주소값 저장
  *p = 5; // *p에 5저장

  printf("&num = %p, num = %d.\n", &num, num);
  printf("p = %p, *p = %d, &p = %p.\n", p, *p, &p);

  printf("sizeof(p) = %d.\n", sizeof(p)); // 포인터변수 주소 크기 8바이트
  printf("sizeof(*p) = %d.\n", sizeof(*p)); // 포인터변수가 가리키는 변수 크기 4바이트

  return 0;

}
*/

/*
//ex 10-2
int main() {
  int first = 50, second = 200, * p;

  printf("&first is %p.\n", &first);
  printf("&p is %p.\n", &p);

  p = &first;
  printf("&p is %p.\n", &p); // 얘는 그대로야
  printf("p is %p.\n", p);
  printf("*p is %d.\n", *p);

  *p += 50;
  printf("*p changed to %d.\n", *p);

  p = &second;
  printf("*p changed to %d.\n", *p);

  return 0;
}
*/

/*
//ex 10-3
void call_by_value(int p)
{
  p += 1;
}

void call_by_reference(int *p)
{
  *p += 1;
}

int main()
{
  int num;

  num = 500;
  printf("Before call_by_value, num is %d.\n", num);
  call_by_value(num);
  printf("After call_by_value, num is %d.\n", num);

  num = 500;
  printf("Before call_by_reference, num is %d.\n", num);
  call_by_reference(&num);
  printf("After call_by_reference, num is %d.\n", num);

  return 0;
}
*/

/*
//ex 10-4
void min_max(int a, int b, int* min, int* max)
{
  if(a<b)
  {
    *min = a;
    *max = b;
  }
  else
  {
    *min = b;
    *max = a;
  }
}

int main()
{
  int first, second, smaller, larger;
  printf("Enter two different integers: \n");
  scanf("%d%d", &first, &second);
  min_max(first, second, &smaller, &larger);
  printf("Smaller : %d, Larger: %d\n", smaller, larger);

  return 0;
}
*/

/*
//ex 10-5
int* larger(int* a, int* b)
{
  if (*a > *b)
    return a;
  else
    return b;
}

int main()
{
  int first, second, *p;
  printf("Enter two different integers: \n");
  scanf("%d%d", &first, &second);
  p = larger(&first, &second);
  printf("The larger is: %d\n", *p);

  printf("%p",p);
  printf("\n");
  printf("%p", &p);

  return 0;
}
*/

/*
//ex 10-6
void swap(int*, int*);

int main()
{
  int first, second;
  printf("two numbers to swap: \n");
  scanf("%d%d", &first, &second);
  printf("Before swap: first = %d and second = %d.\n",first, second);
  swap(&first, &second);
  printf("After swap: first = %d and second = %d.\n",first, second);

  return 0;
}

void swap(int* p1, int* p2)
{
  int temp;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
*/

/*
//ex 10- 7
#define MAX 4
void increment(int rb[])
{
  int i;
  for (i = 0; i<MAX; i++)
  {
    rb[i]++;
  }
}

int main()
{
  int i, rabbit[MAX] = {10,20,30,40};
  increment(rabbit);
  for (i = 0; i<MAX; i++)
  {
    printf("%d ", rabbit[i]);
  }
  printf("\n");

  return 0;
}
*/

/*
// ex 10-8
#define MAX 100
void print_array(const int arr[], int length)
{
  int i;
  for (i = 0; i < length; i++)
  {
    printf("%d ", arr[i]);
  }
}

int main()
{
  int i, temp, rabbit[MAX];
  printf("Enter an integer: \n");
  scanf("%d", &temp);
  for (i=0; temp>=0; i++)
  {
    rabbit[i] = temp;
    printf("Enter an integer: \n");
    scanf("%d", &temp);
  }

  print_array(rabbit, i);
  printf("\n");

  return 0;
}
*/

/*
//ex10-9
#define MAX 100
void print_array(const int arr[], int length);
void swap(int*, int*);
void selection_sort(int arr[], int length);

int main()
{
  int i = 0, temp, data[MAX];
  printf("Enter integers seperated by a blank.\n");
  while (1)
  {
    scanf("%d", &temp);
    if (temp < 0)
      break;
    data[i++] = temp;
  }

  printf("Before sorting: ");
  print_array(data, i); //data 포인터 즉 포인터 시작주소
  printf("\n");

  selection_sort(data, i);
  printf("After sorting: ");
  print_array(data, i);
  printf("\n");

  return 0;
}

void print_array(const int arr[], int length)
{
  int i;
  for (i = 0; i< length; i++)
    printf("%d ", arr[i]);
}

void swap(int* p, int* q)
{
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

void selection_sort(int arr[], int length)
{
  int last, largest, current;

  for (last = length-1; last > 0; last--)
  {
    largest = 0; //일단 arr[0]이 제일 크다고 가정하는거다.
    for (current = 1; current <= last; current++)
    {
      if (arr[current] > arr[largest])
        largest = current;
    }
    swap(&arr[largest], &arr[last]);
  }
}

*/

/*
//ex 10 -10
#define MAX 100

void print_array(const int arr[], int length);
void swap(int*, int*);
void bubble_sort(int arr[], int length);

int main() {
  int i = 0, temp, data[MAX];
  printf("Enter integers seperated by a blank.\n");
  while (1) {
    scanf("%d", &temp);
    if (temp < 0)
      break;
    data[i++] = temp;
  }

  printf("Before sorting: ");
  print_array(data, i);
  printf("\n");

  bubble_sort(data, i);
  printf("After sorting: ");
  print_array(data, i);
  printf("\n");

  return 0;
}

void print_array(const int arr[], int length)
{
  int i;
  for (i = 0; i<length; i++)
    printf("%d ", arr[i]);
}

void swap(int *p, int *q)
{
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

void bubble_sort(int arr[], int length)
{
  int pass, current;

  for (pass = 1; pass < length; pass++)
  {
    for (current = 0 ;current < (length - pass) ;current++)
    {
      if (arr[current] > arr[current+1])
      {
        swap(&arr[current], &arr[current+1]);
      }
    }
  }
}
*/

//ex 10 -11
#define MAX 100

void print_array(const int arr[], int length);
void swap(int*, int*);
void bubble_sort(int arr[], int length);

int main() {
  int i = 0, temp, data[MAX];
  printf("Enter integers seperated by a blank.\n");
  while (1) {
    scanf("%d", &temp);
    if (temp < 0)
      break;
    data[i++] = temp;
  }

  printf("Before sorting: ");
  print_array(data, i);
  printf("\n");

  bubble_sort(data, i);
  printf("After sorting: ");
  print_array(data, i);
  printf("\n");

  return 0;
}

void print_array(const int arr[], int length) {
  int i;
  for (i = 0; i < length; i++)
    printf("%d ", arr[i]);
}

void swap(int* p, int* q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

void bubble_sort(int arr[], int length)
{
  int pass, current, sorted = 0; //이미 정렬 되어 있는지 확인
  for (pass = 1; (pass<length) && (!sorted); pass++)
  {
    sorted = 1;
    for (current = 0; current < (length  - pass) ; current++)
    {
      if (arr[current] > arr[current+1])
      {
        swap(&arr[current], &arr[current+1]);
        sorted = 0;
      }
    }
  }
}