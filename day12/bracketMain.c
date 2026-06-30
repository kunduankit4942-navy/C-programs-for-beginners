#include <stdio.h>
#include <stdlib.h>
#include "bracket.h"
#define SZ 100

int main(){
    char str[SZ];
    int TOS=-1;
    printf("Enter a string with brackets: ");
    scanf("%s", str);

    if(check(str, &TOS, SZ)) {
        printf("Brackets are balanced.\n");
    } else {
        printf("Brackets are not balanced.\n");
    }
    return 0;
}