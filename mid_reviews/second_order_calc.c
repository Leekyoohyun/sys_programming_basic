//
// Created by 이규현 on 2024. 10. 20..
//
/*
1. input: integer a,b,c
2. check order
3. 2nd order -> 판별식, 근의공식
4. 1st order -> get root
5. no root
 */
#include <stdio.h>
#include <Math.h>

int calc(int a, int b,int c);
int second_order_calc(int a, int b, int c);
int first_order_calc(int a, int b, int c);
int no_root();


int main() {
  int a,b,c;
  printf("Enter three Integers: \n");
  scanf("%d %d %d",&a,&b,&c);
  calc(a,b,c);
  return 0;
}

//second_order
int second_order_calc(int a, int b, int c){
  int D= b*b-4*a*c;
  if(D==0)
    printf("Root is %d.\n", -b/2);
  else if(D>0)
    printf("1st root: %lf, 2nd root: %lf. \n", (-b+sqrt(D))/2, (-b-sqrt(D))/2);
  else
    printf("%s","No root.\n");

  return 0;
}

int first_order_calc(int a, int b, int c){
  printf("Root is %d.\n", -(c/b));

  return 0;
}

int no_root(){
  printf("there is no root.\n");

  return 0;
}

int calc(int a, int b, int c){
if(a != 0)
  second_order_calc(a,b,c);
else if(b != 0)
  first_order_calc(a,b,c);
else
  no_root();

 return 0;
}
