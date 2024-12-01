//
// Created by 이규현 on 2024. 12. 1..
//
#include <stdio.h>

/*
//ex 11-1
int main(){
  int i, *p, arr[] = {5, 10, 15, 20, 25};
  printf("arr[0]: %d.\n", arr[0]);
  printf("*arr: %d.\n", *arr);

  p = arr;
  for(i = 0; i < 5; i++){
    printf("%d\t", *(p+i));
  }
  printf("\n");

  p = arr;
  for(i = 0; i < 5; i++)
    printf("%d\t", *p++);
  printf("\n");

  p = arr;
  for(i = 0; i < 5; i++)
    printf("%d\t", (*p)++);
  printf("\n");

  return 0;

}
*/

/*
//ex 11-2
#define MAX 5

int main(){
  int i, sum, *p, arr[MAX] = {5, 10, 15, 20, 25};
  sum = 0;
  for(p = arr; p < &arr[MAX]; p++)
    sum += *p;
  printf("Sum is %d.\n", sum);

  sum = 0;
  for(i = 0; i < MAX; i++)
    sum += *(arr+i);
  printf("Sum is %d.\n", sum);

  sum = 0;
  p = arr;
  for(i = 0; i < MAX; i++)
    sum += p[i];
  printf("Sum is %d.\n", sum);

  return 0;
}
*/

/*
//ex 11-3, 4
#include <stdlib.h>
#include <time.h>
int main() {
  int i;
  for(i = 0; i < 6; i++)
    printf("%d\n", rand());
  printf("\n");

  int j;
  srand(time(NULL));
  for( j = 0; j<6; j++)
    printf("%d", (1+rand()%45));
  printf("\n");


  return 0;
}
*/

/*
//ex 11-5
#define MAX 6
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <windows.h>

void print_array(const int*, int);
void swap(int*, int*);
void bubble_sort(int*, int);
int is_duplicate(const int*, int, int);
void set_numbers(int*);

void print_array(const int* arr, int length) {
  int i;
  for(i = 0; i < length; i++)
    printf("%d ", arr[i]);
}

void swap(int* p, int* q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

void bubble_sort(int* arr, int length) {
  int pass, current, sorted = 0;
  for(pass = 1; (pass < length) && (!sorted); pass++){
    sorted = 1;
    for(current=0; current < (length - pass); current++){
      if(arr[current] > arr[current+1])
        swap(&arr[current], &arr[current+1]);
        sorted = 0;
    }
  }
}

int main(void) {
  int money, i, lottery[MAX];
  while(1){
    printf("Enter available money: \n");
    scanf("%d", &money);
    if(money == 0)
      break;
    printf("Possible sets of lottery numbers are, \n");
    for(i = 1; i<= money/1000; i++){
      set_numbers(lottery);
      bubble_sort(lottery, MAX);
      print_array(lottery, MAX);
      printf("\n");
    }
  }

  return 0;
}

int is_duplicate(const int* arr, int length, int n){
  int i;
  for(i=0; i<length; i++){
    if(arr[i] == n)
      return 1;
  }

  return 0;
}

void set_numbers(int* lotto){
  int i, num;
  Sleep(1000);
  srand(time(NULL));
  for(i=0; i<MAX;){
    num = 1+rand()%45;
    if(!is_duplicate(lotto, i, num))
      lotto[i++] = num;
  }
}
*/

/*
//ex11-6 --- 이중포인터
int main(){
  int num = 10;
  int *ptr = &num;
  int **dptr = &ptr;

  printf("num: %d.\n", num);
  printf("*ptr: %d.\n", *ptr);
  printf("**dptr: %d.\n", **dptr);

  return 0;
}
*/

/*
//ex 11-7
void swap(int **, int**);

int main() {
  int first, second;
  int *fp = &first, *sp = &second;

  printf("Enter two integers: \n");
  scanf("%d %d", &first, &second);
  printf("Before swap: *fp: %d, *sp: %d\n", *fp, *sp);
  swap(&fp, &sp);
  printf("After swap: *fp: %d, *sp: %d\n", *fp, *sp);

  return 0;
}

void swap(int** p, int** q){
  int *temp;
  temp = *p;
  *p = *q;
  *q = temp;
}
*/

/*
//ex 11-8
int main() {
  int *p, arr[4] = {10,20,30,40};

  printf("arr: %p\n", arr);
  printf("arr+1: %p\n", arr+1);
  printf("sizeof(*arr): %d\n\n", sizeof(*arr));

  printf("&arr: %p\n", &arr);
  printf("&arr+1: %p\n", &arr+1);
  printf("sizeof(*(&arr)): %d\n\n", sizeof(*(&arr)));

  p = arr;
  printf("p: %p\n", p);
  printf("p+1: %p\n", p+1);
  printf("&p: %p\n", &p);
  printf("&p+1: %p\n", &p+1);

  return 0;
}
*/

/*
//ex11-9 -- 동적메모리
int* find_bigger(const int a, const int b){
  int bigger;
  bigger = (a>b) ? a: b;

  return &bigger;
}

int main(){
  int first, second, max;

  printf("Enter two numbers: \n");
  scanf("%d %d", &first, &second);

  max = *(find_bigger(first, second));
  printf("bigger one: %d\n", max);
  return 0;
}
*/

/*
//ex 11-10
int* num_array(){
  int i, arr[5];
  for(i=0;i<5;i++){
    arr[i] = i;
  }

  return &arr; //지역변수기 때문에 메인에서 호출하기 전 사라진다. 즉 가리키는 주소가 사라짐
               // 이를 해결하기 위해 동적메모리(heap memory)를 사용해야 하는데 이 함수가 malloc
}

int main(){
  int i, *p = num_array();

  for(i=0;i<5;i++)
    printf("%d ", p[i]);
  printf("\n");

  return 0;
}
*/

/*
//ex 11-11
#include <stdlib.h>

int* get_number(){
  int* p;
  p = (int*)malloc(sizeof(int));
  if(p != NULL)
    *p = 20;
  return p;
}

int main(){
  int i, *ptr;
  ptr = get_number();
  printf("%d\n", *ptr);
  free(ptr);
  ptr = NULL;

  printf("%p\n", ptr);
  printf("%p\n", &ptr);
  printf("%p\n", get_number());
  printf("%p\n", ptr);

  return 0;
}
*/

/*
//ex 11 -12
#define MAX 10
#include <stdlib.h>

int* square_array(){
  int i;
  int *p = NULL;

  p = (int*)malloc(sizeof(int) * MAX);
  if(p != NULL){
    for(i = 0; i < MAX; i++)
      p[i] = i * i;
  }

  return p;
}

int main(){
  int i, *arr = square_array();
  for(i = 0; i < MAX; i++)
    printf("%d ", *(arr + i));
  printf("\n");
  free(arr);
  arr = NULL;
  return 0;
}
*/

/*
//ex 11-13
#include <stdlib.h>

int main() {
  int *p = (int*)malloc(3*sizeof(int));
  int i;

  p[0] = 100; p[1] = 200; p[2] = 300;
  p = (int *)realloc(p, 5*sizeof(int));
  if(p != NULL){
    p[3] = 400;
    p[4] = 500;
  }
  for(i = 0; i < 5; i++)
    printf("%d ", *(p+i));
  printf("\n");

  return 0;
}
*/

/*
//ex 11 - 14
#include <stdlib.h>
int main() {
  int last = 0; char ch;
  char *p;

  p = (char*)malloc(sizeof(char));
  if(p == NULL)
    exit(1);

  printf("Enter a character: \n");
  while(1){
    if((ch = getchar()) == '\n')
      break;
    else
      *(p+last) = ch;
    last++;
    p = (char*)realloc(p, (last+1) * sizeof(char));
    if(p == NULL)
      exit(1);
  }

  *(p+last) = '\0';
  printf("%s\n", p);
  return 0;
}
*/

/*
//ex 11-15
#include <stdlib.h>
#define ROW 2
#define COL 3

int main() {
  int i, j;
  int first[ROW][COL], second[ROW][COL], add[ROW][COL];
  for(i = 0; i< ROW; i++){
    for(j = 0; j < COL; j++){
      printf("Enter first matrix [%d][%d]:", i, j);
      scanf("%d", &first[i][j]);
    }
  }

  for(i = 0; i< ROW; i++){
    for(j = 0; j < COL; j++){
      printf("Enter second matrix [%d][%d]:", i, j);
      scanf("%d", &second[i][j]);
    }
  }

  for(i = 0; i < ROW; i++){
    for(j = 0; j < COL; j++){
      add[i][j] = first[i][j] + second[i][j];
    }
  }

  printf("Sum of two matrices:\n");
  for(i = 0; i < ROW; i++){
    for(j = 0; j < COL; j++){
      printf("%d ", add[i][j]);
    printf("\n");
    }
  }

  return 0;
}
*/

/*
//ex 11-16
int main() {
  int *p, *q,
  arr[2][3] = {
        1,2,3,
        4,5,6
  };

  printf("arr: %p\n", arr);
  printf("arr+1: %p\n", arr+1);
  printf("&arr: %p\n", &arr);
  printf("&arr+1: %p\n", &arr+1);

  printf("arr[0]: %p\n", arr[0]);
  printf("arr[0] + 1: %p\n", arr[0] + 1);
  printf("&arr[0]: %p\n", &arr[0]);
  printf("&arr[0] + 1: %p\n", &arr[0] + 1);

  p = arr;
  printf("p : %p, p+1: %p\n", p, p+1);

  q = arr[0];
  printf("q : %p q+1: %p\n", q, q+1);

  printf("(q+1)[2] : %d\n\n", (q+1)[2]);

  printf("%d\n", arr[0][1]);
}
*/

/*
//ex 11-18
#include <stdlib.h>

void print_it(int p[2][3]){
  int i, j;
  for(i = 0; i < 2; i++){
    for(j = 0; j < 3; j++){
      p[i][j] = i*i + j*j;
      printf("%d ", p[i][j]);
    }
    printf("\n");
  }

}

int main(){
  int *arr = (int*)malloc(2 * 3 * sizeof(int));
  if(arr != NULL)
    print_it(arr);
  free(arr);
  arr = NULL;
  return 0;
}
*/

// example_11-19.c

#include <stdlib.h>

int ** create_matrix(int, int);
void destroy_matrix(int**, int);

int main() {
  int row, column, i, j, **matrix;

  printf("Enter row and column.\n");
  scanf("%d%d", &row, &column);

  matrix = create_matrix(row, column);
  for (i = 0; i < row; i++) {
    for (j = 0; j < column; j++) {
      matrix[i][j] = i * i + j * j;
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
  destroy_matrix(matrix, row);

  return 0;
}

int ** create_matrix(int row, int col) {
  int i, **p;
  p = (int**)malloc(row * sizeof(int*));
  if (p == NULL)
    exit(1);
  for (i = 0; i < row; i++) {
    p[i] = (int*)malloc(col * sizeof(int));
    if (p[i] == NULL)
      exit(1);
  }
  return p;
}

void destroy_matrix(int** p, int row) {
  int i;
  for (i = 0; i < row; i++)
    free(p[i]);
  free(p);
  p = NULL;
}
