#include <stdio.h>

int main() {
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if(a>='A' && a<='Z'){
        printf("%c is an uppercase letter",a);
    }
    else{
        printf("%c is an lowercase letter",a);
    }
    return 0;
}