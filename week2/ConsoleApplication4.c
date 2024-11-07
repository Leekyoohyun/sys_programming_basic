#include <stdio.h>

int main(){
    int math;
    int science;
    int sum;

    math = 90;
    science = 100;
    sum = math+science;

    char ch;
    ch = 'b';

    printf("size of char %d \n", sizeof(ch));

    printf("ch = %c \n", ch);

    printf("--------- \n");

    unsigned int age;
    age = 10;
    printf("%d \n",age);
    age = 10U;
    printf("%d \n",age);


    return 0;
}