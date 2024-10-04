//
// Created by 이규현 on 2024. 10. 4..

#include <stdio.h>
int main(){
 int a = 10, b=5;
 double p= 10.0, q= 5.02, r = 10.00000000000000001;

 printf("%d\n", a>b); //1
 printf("%d\n", a>=b); //1
 printf("%d\n", a==b); //0
 printf("%d\n", a!=b); //1

 printf("%d\n", p>q); //1
 printf("%d\n", p==r); //1

 return 0;
}
