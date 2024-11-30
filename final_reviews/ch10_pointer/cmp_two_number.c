//
// Created by 이규현 on 2024. 11. 30..
//
#include <stdio.h>

//최대최소 메소드
void min_max(int a, int b, int* min, int* max){
  if(a<b){
    *min = a;
    *max = b;
  }else{
    *min = b;
    *max = a;
  }
}

//swap 메소드
void swap(int *p, int *q){
  int temp;
  temp = *p;
  *p = *q;
  *q  = temp;
}

//배열과 포인터!
void increment(int arr[]){
  int i;
  for(i=0; i<4; i++)
    arr[i]++;
}

int main(){
  int first, second, smaller, larger;
  printf("Enter two different numbers: \n");
  scanf("%d %d", &first, &second);
  min_max(first, second, &smaller, &larger);
  printf("smaller: %d, larger: %d\n", smaller, larger);
  swap(&smaller, &larger);
  printf("smaller: %d, larger: %d\n", smaller, larger);

  int array[] = {10, 20, 30, 40};
  increment(array);
  for(int i=0; i<4; i++){
    printf("array[%d] = %d ", i,array[i]);
  }

  printf("\n");

  return 0;
}

