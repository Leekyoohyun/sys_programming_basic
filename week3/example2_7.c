#include <stdio.h>

int main() {
    int num; char ch;
    unsigned int num2;

    num = 128;
    num2 = num;
    ch = num;
    printf("%d %d\n", num, ch);
    printf("%d %d %d\n", num, ch, num2);

    // unsigned 절댓값 정수 표현 두배만큼 더 할 수 있음. 왜? 음수 표현 안하니깐

    return 0; 
}

