//
// Created by 이규현 on 2024. 10. 10..
//
#include <stdio.h>

int get_min(int,int,int);

int main() {
  int f,s,t;
  printf("Enter three integers.\n");
  scanf("%d%d%d",&f,&s,&t);
  printf("The minimum number is %d.\n",get_min(f,s,t));

  return 0;
}

int get_min(int a, int b, int c) {
  if(a<b){
    if(a<c)
      return a;
    else
    return c;
    }
    else{
      if(b<c)
        return b;
      else
        return c;
    }

}