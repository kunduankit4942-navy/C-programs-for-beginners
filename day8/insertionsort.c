#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DEBUG 1

#define sz 10

int main() {
    int a[sz],i,j,k,mn,mp,t,num;
    srand(time(NULL));

    // Generate random numbers
    for ( i = 0; i < sz; i++) {
        a[i] = rand() % 1000;   // 1 to 100
    }
    for ( k = 0; k < sz; k++) {
        printf(" %d", a[k]);
    } 
    
    for(i=1;i<sz;i++){
        num=a[i];
        j=i-1;
        while(j>=0 && a[j]>num){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=num;
    }
     
     printf("\n-------OUTPUT--------\n");   
    for ( k = 0; k < sz; k++) {
        printf(" %d", a[k]);
    }   
    return 0;
}