#include <stdio.h>

int main() {
    char ch;
    ch = 'a';   // sizeof(ch) = 4
    printf("sizeof(ch) is %d \n", sizeof(ch));
    printf("sizeof(ch) is %c \n", ch);

    ch = 'a'+1;
    printf("ch is %d \n", ch);
    printf("ch is %c \n", ch);

    ch = ch -32;
    printf("ch is %c \n", ch);

    ch = 97;
    printf("97 in character format is %c.\n", ch);
    return 0;
}

