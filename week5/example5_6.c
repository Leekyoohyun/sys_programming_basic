//
// Created by 이규현 on 2024. 10. 10..
//
#include <stdio.h>

int get_min(int a, int b, int c) {
  int min;
  if(a<b)
    min = a;
  else
    min = b;
  if(c<min)
    min = c;
  return min;
}

int main() {
  int f,s,t;
  printf("Enter three integers.\n");
  scanf("%d%d%d",&f,&s,&t);
  printf("The minimum number is %d.\n", get_min(f,s,t));

  return 0;
}