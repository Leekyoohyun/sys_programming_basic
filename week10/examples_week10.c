//
// Created by 이규현 on 2024. 11. 7..
//
#include <stdio.h>

// EX
/*int main() {
  int x = 100;

  int * ptr;

  ptr = &x;

  printf("%d \n",*ptr);
  printf("%p \n", ptr);
  printf("%p \n", &x);

  *ptr = 20000;
  printf("%d \n",x);

  return 1;
}
 */

// Ex
/*int main() {
  double x = 3.14;

  double * ptr;

  ptr = &x; // 변수 x와 포인터 연결

  *ptr = *ptr +1.0;
  printf("%f\n", x);
  printf("%f\n", *ptr);
  printf("%p\n", ptr);
  printf("%p\n", &x);
  printf("%d \n", sizeof(ptr)); // 포인터 벼
  return 0;
}*/

// Ex
/*
int main() {
  int first = 50, second = 100;
  printf("%p \n", &first);
  printf("%p \n", &second);
  int * ptr;
  ptr = &first;
  printf("%p \n", ptr);
  printf("%d \n", *ptr);

  return 0;
}
 */

// Ex
/*
void one(int *ptr){  // call by pointer
  *ptr = *ptr +1;
}

int main() {
  int x = 200;

  one(&x);

  printf("%d\n", x);
}
 */

// Ex 10-6

/*
void swap(int *ptrf, int *ptrs){
  int temp;
  temp = *ptrf;
  *ptrf = *ptrs;
  *ptrs = temp;
}

int main(){
  int first = 50, second = 200;

  printf("Before first = %d, second = %d \n", first, second);

  swap(&first, &second);

  printf("After first = %d, second = %d \n", first, second);

  return 0;

}*/

// Ex 10-4
void min_max(int f, int s, int *large, int *small)
{
  if(f>s){
    *large = f;
    *small = s;
  }else{
    *large = s;
    *small = f;
  }
}

int main() {
  int f = 10, s = 50;

  int larger, smaller;

  min_max(f, s, &larger, &smaller);

  printf("larger %d, smaller %d \n", larger, smaller);

  return 0;
}