//
// Created by 이규현 on 2024. 9. 26..
//
#include <stdio.h>
int main(){
  short a = 32768; //short: -32768~ +32767
  short b = a/2;
  float c = 1E45;
  float d = c/2.0;
  printf("a: %d, b: %d, c: %f, d: %f\n", a, b, c, d); //short의 범위를 넘어서 다시 끝으로 돌아감.
  return 0;
}