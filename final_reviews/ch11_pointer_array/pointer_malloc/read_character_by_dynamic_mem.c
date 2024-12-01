//
// Created by 이규현 on 2024. 12. 1..
//
#include <stdio.h>

#include <stdlib.h>
int main() {
    int last = 0; char ch;
    char *p;

    p = (char*)malloc(sizeof(char));
    if(p == NULL)
        exit(1);

    printf("Enter a character: \n");
    while(1){
        if((ch = getchar()) == '\n')
            break;
        else
            *(p+last) = ch;
        last++;
        p = (char*)realloc(p, (last+1) * sizeof(char));
        if(p == NULL)
            exit(1);
    }

    *(p+last) = '\0';
    printf("%s\n", p);
    return 0;
}