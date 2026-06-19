#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DEBUG 1

#define sz 10

int main() {
    int a[sz],i,j,k,mn,mp,t,key;
    srand(time(NULL));
    
    for ( i = 0; i < sz; i++) {
        a[i] = rand() % 1000;  
    }
    for ( k = 0; k < sz; k++) {
        printf(" %d", a[k]);
    } 
    
    for(int i = 1; i < sz; i++) {
        int key = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
     
     printf("\n-------OUTPUT--------\n");   
    for ( k = 0; k < sz; k++) {
        printf(" %d", a[k]);
    }   
    return 0;
}