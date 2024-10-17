//
// Created by 이규현 on 2024. 10. 17..
//
#include <stdio.h>
#define PI 3.14159265

int main(){
  float f = 3.141592;
  printf("%.2f. \n",f);  // 3.14 두자리
  printf("%.3f. \n",f);  // 3.141

  printf("%.25f.\n",f);  // 3.1415920000?

  printf("%.25f. \n", PI);
  return 0;
}