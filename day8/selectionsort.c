#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DEBUG 1

#define sz 10

int main() {
    int a[sz],i,j,k,min,temp;
    srand(time(NULL));

    // Generate random numbers
    for ( i = 0; i < sz; i++) {
        a[i] = rand() % 1000;   // 1 to 100
    }
    for ( k = 0; k < sz; k++) {
        printf(" %d", a[k]);
    } 
    
    for(i=0;i<sz-1;i++){
        min=i;
        for(j=i+1;j<sz;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }

    }
     
     printf("\n-------OUTPUT--------\n");   
    for ( k = 0; k < sz; k++) {
        printf(" %d", a[k]);
    }   
    return 0;
}