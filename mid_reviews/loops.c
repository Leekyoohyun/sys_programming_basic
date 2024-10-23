//
// Created by 이규현 on 2024. 10. 24..
//
#include <stdio.h>

/*int main(){
  int sum = 0;

  for(int i=1; i<11; i++){
    if(i%2 == 0){
      sum += i;
      printf("sum from 0 to %d.\n",sum, i);
    }
  }
  return 0;
}
 */

/*int main(){
  int num =10, count = 0, sum = 0;
  for(int i = 1; i<(num+1); i++){
    if(num%i == 0){
      count++;
      sum+=i;
      printf("%d는 %d번째 약수. \n", i,count);
    }
  }
}
 */

/*int main() {
  int sum = 0;
  for(int i = 1; i<4; i++){
    printf("%d.\n", i);
    break; //1하고 끝내버려.
  }

  for(int i=1; i<11; i++){
    if(i%2 ==1){
      continue;  //홀수일 때는 다시 if문으로 돌아가고 밑에 sum에 영향x
    }
    sum+=i;
  }

  printf("%d.\n",sum);
  return 0;
}
 */

/*int main() {
  int i =1;

  for( ; ; ){
    if(i > 4){
      break;
    }
    printf("%d\n", i);
    i++;
  }
  return 0;
}
 */

/*int main() {
  int i =1;
  while(i<4){
    printf("%d\n",i);
    i++;
  }
  printf("----------\n");

  i=0;
  do{
    i++;
    printf("%d\n",i);
  }while(i<4);


  printf("----------\n");

  int a = 1;
  while(1){
    if(a>3){
      break;
    }
    printf("%d\n",a);
    a++;
  }
  return 0;
}

 */

/*int main() {
  int ch;
  for( ; ; ){
    ch = getchar();
    //맥에서 컨트롤 D-> EOF
    if(ch == EOF){
      break;
    }else
      putchar(ch);
  }
  return 0;
}
 */

int main() {
  int ch;
  printf("Enter a character.\n");
  ch = getchar();
  if(ch =='y')
    putchar('u');
  else
    printf("No.\n");
  return 0;
}