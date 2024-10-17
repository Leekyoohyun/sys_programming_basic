//
// Created by 이규현 on 2024. 10. 17..
//
#include <stdio.h>

/*int main() {
  int sum = 0;
  for(int i = 1; i<11; i++){
    if(i % 2 == 0)
      sum += i;
    printf("sum : %d, sum from 0 to %d. \n", sum, i);

  //printf("%d. \n", i); cant use i
}
 */

//Ex 약수찾기
/*int main() {
   int num =10, count = 0, sum =0;
  for(int i = 1; i<(num+1); i++) {
    if(num % i == 0) {
      count++;
      sum += i;
      printf("%d는 %d번째 약수. \n", i, count);
    }
  }
  printf("약수의 개수: %d. \n", count);
  printf("총 약수의 합: %d. \n", sum);

  if(count == 2)
    printf("%d는 소수입니다. \n", num);
  else
    printf("%d는 합성수입니다. \n", num);

  return 0;
}
 */

// Ex 6-
/*int main() {
  int sum = 0;
  for(int i=1; i<4; i++){
    printf("%d. \n",i);
    break;
  }

  for(int i=1; i<=10; i++){
    if(i%2 ==1){
      continue;
    }
    sum += i;
  }

  printf("%d. \n", sum);

  return 0;
}
 */

// Ex 6-
/*int main() {
  int i=1; //제어변수 초기

  for( ; ; ){
    if(i<4){
      break;
    }
    printf("%d. \n",i);
    i++;
  }

  return 0;
}
*/

// Ex 6-
/*
int main() {
  int i = 1; //초기식
  while(i<4) { // 조건식
    printf("%d. \n", i);
    i++; //증감식
  }
  printf("------ \n");

  i=0;
  do {
    i++;
    printf("%d. \n", i);
  }while(i<4);

  return 0;
}
*/

//Ex 6-
/*int main() {
  int i = 1;
  while(1) {
    if(i>3){
      break;
    }
    printf("%d. \n", i);
    i++;
  }
  return 0;
}
 */

// Ex 6-9
/*int main() {
  int ch;
  for(;;){
    ch = getchar();
    // ctrl + c --> EOF
    if(ch == EOF){
      break;
    }else{
      putchar(ch);
    }
  }

  return 0;
}
 */

// Ex 6-10
int main(){
  int ch;

  printf("Enter a character. \n");
  ch = getchar();

  if(ch == 'y'){
    printf("Yes. \n");
  }else {
    printf("No. \n");
  }

  return 0;
}
