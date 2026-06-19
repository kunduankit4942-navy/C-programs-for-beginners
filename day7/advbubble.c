
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DEBUG 1

#define sz 10

int main() {
    int a[sz],i,j,t;
    srand(time(NULL));

    // Generate random numbers
    for (int i = 0; i < sz; i++) {
        a[i] = rand() % 1000;   // 1 to 100
    }
    
    for(i=0;i<sz;i++){
        if(DEBUG) printf("\n %c  ",i+65);
        for(j=0;j<sz;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                
            }
        }
        if(DEBUG){
            for (int k = 0; k < sz; k++) {
            printf("%d ", a[k]);
            }
    }
    }
     printf("\n-------OUTPUT--------\n");   
    for (int k = 0; k < sz; k++) {
        printf(" %d", a[k]);
    }   
    return 0;
}