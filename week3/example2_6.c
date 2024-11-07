#include <stdio.h>

int main() {


    // 예상 ㅋ
    int a = 6;
    int b = ++a; //7
    printf("%d\n", b); //7나올꺼고
    b = a++;    // 8
    printf("%d\n", b); //7
    printf("%d\n", a); //8이겟지


    char ch;
    ch = 'a';
    printf("sizeof(ch) is %d \n", sizeof(ch));
    printf("sizeof('a') is %d \n", sizeof('a'));

    ch = 'a'+1;
    printf("ch is %d \n", ch);
    printf("ch is %c \n", ch);

    ch = ch -32;
    printf("ch is %c \n", ch);

    ch = 97;
    printf("97 in character format is %c.\n", ch); //97번 a
    return 0;
}

