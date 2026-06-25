#include <stdio.h>
#include <string.h>
#include "mylib.h"
#define SZ 10

int main() {
    int num1, num2, ary[100], size = SZ;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int max = getMax(num1, num2);
    printf("The maximum of %d and %d is %d\n", num1, num2, max);
    
    float avg = getAverage(num1, num2);
    printf("The average of %d and %d is %.2f\n", num1, num2, avg);

    printf("Enter %d numbers for the array: ", size);
    for (int i = 0; i < size; i++) {    
        scanf("%d", &ary[i]);
    }
    
    float avgAry = getAverageAry(ary, size);
    printf("The average of the array is %.2f\n", avgAry);

    return 0;
}

