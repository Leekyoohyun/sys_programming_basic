//
// Created by 이규현 on 2024. 10. 10..
//
#include <stdio.h>
#include <math.h>

//ax^2+bx+c=0의 근을 구하는 프로그램
void zero_order(int a, int b, int c) {
  printf("There is no root.\n");
}

void first_order(int a, int b, int c) {
  printf("The root is %.3f.\n", (-c)/(double)b);
}

double calc_D(int a, int b, int c) {
  return (double)(b*b-4*a*c);
}

void second_order(int a, int b, int c) {
  double root1, root2, D, root_D;
  D = calc_D(a,b,c);
  root_D = sqrt(D);
  root1 = (-b+root_D)/(double)(2*a);
  root2 = (-b-root_D)/(double)(2*a);
  printf("The roots are, %.3f, %.3f.\n", root1, root2);
}


int main(){
  int a,b,c;
  printf("Enter three coefficents a, b, c.\n");
  scanf("%d %d %d",&a,&b,&c);
  if(a !=0)
    second_order(a,b,c);
  else if(b != 0)
    first_order(a,b,c);
  else
    zero_order(a,b,c);

  return 0;
}