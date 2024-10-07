#include <stdio.h>

int main() {
    int num; char ch;


    num = 128;

    ch = num;
    printf("%d %d\n", num, ch);
    printf("%d %d\n", num, ch);

    //ch가 왜 -128이야

    // unsigned 절댓값 정수 표현 두배만큼 더 할 수 있음. 왜? 음수 표현 안하니깐

    return 0; 
}

