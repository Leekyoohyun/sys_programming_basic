//
// Created by 이규현 on 2024. 10. 23..
//
#include <stdio.h>

int main() {
  float area;
  double total;

  total = 0.123456789;
  printf("Total is %lf.\n", total);
  total = 0.123456789F;
  printf("Total is %lf.\n", total);

  area = 0.123456789;
  printf("Area is %f\n", area);

  area = 0.123456789F;
  printf("Area is %f\n", area);

  int length;
  length = 3.14;
  printf("Length is %d\n", length);
  length = (int)3.14;
  printf("Length is %d\n", length);

  int count;
  count = printf("Hello.\n");
  printf("%d\n", count);
  count = printf("%d\n",count);
  printf("%d\n", count);

  count = scanf("%d\n", &count);
  printf("%d\n", count);

  int count_1;
  count_1 = printf("Hello.\n");
  printf("%d\n", count_1);

  int n;
  scanf("%d", &n);
  if(n%2){
    printf("%d\n", n);
  }


  return 1;
}