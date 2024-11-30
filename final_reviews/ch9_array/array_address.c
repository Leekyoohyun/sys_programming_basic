//
// Created by 이규현 on 2024. 11. 30..
//
#include <stdio.h>

int main() {
  int arr[5];
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;

  //*** 배열명 == 배열 시작 주소

  printf("&arr[0] = %p\n", &arr[0]);
  printf("&arr[1] = %p\n", &arr[1]);
  printf("arr = %p\n", arr);
}