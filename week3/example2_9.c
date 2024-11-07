#include <stdio.h>
int main() {
    char grade; int sum;

    grade = 'A';
    sum = 0X40302010;
    printf("grade starts at address %p.\n", &grade);    //grade starts at address 0x16dc2734b.
    printf("Sum starts as address %p.\n", &sum);    //Sum starts as address 0x16dc27344.
    return 0;
}