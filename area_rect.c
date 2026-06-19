#include <stdio.h>

int main() {
    float l,b,area;
    printf("Enter the length and breadth:");
    scanf("%f",&l);
    scanf("%f",&b);
    area= l*b;
    printf("Area=%f \n",area);

    return 0;
}