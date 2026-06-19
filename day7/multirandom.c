#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

int main() {
    int a[SIZE];

    srand(time(NULL));

    // Generate random numbers
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 1000;   // 1 to 100
    }

    // Print array
    printf("Random numbers:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}