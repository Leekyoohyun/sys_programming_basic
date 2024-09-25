//
// Created by 이규현 on 2024. 9. 25..
//

#include <stdio.h>
int main(){
  int i;
  float sum = 0.0F;

  for(i=0; i<100; i++){
    sum = sum + 0.1F;
  }
  //0.1을 100번 더한 값을 출력하는 프로그램
  printf("The sum is %f\n", sum); // 이결과는 10.000002 이는 부동소수 표현에 오차가 있는것.
  return 0;
}