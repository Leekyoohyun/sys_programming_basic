#include <stdio.h>

int main() {

    int sum, count;

    sum = 0X01020304;
    printf("Sum is %d in decimal.\n", sum);
    printf("%d green %s are on the table.\n", 10, "apples");
    count = printf("hello.\n"); //hello + dot + n = 7
    printf("printf returns %d.\n", count);

    /*
    Sum is 16909060 in decimal.
    10 green apples are on the table.
    hello.
    printf returns 7.
     */

    return 0;
    
}