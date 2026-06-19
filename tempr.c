#include <stdio.h>

int main() {
    float c,f;
    printf("Enter the temperature in Celsius:");
    scanf("%f",&c);
    f=32+(9*c/5);
    printf("Temperature in Farhenheit=%f",f);

    return 0;
}