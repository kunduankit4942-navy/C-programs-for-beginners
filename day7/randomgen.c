#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));   // Seed the random number generator

    int r = rand()%100 ;
    printf("Random number = %d\n", r);

    return 0;
}