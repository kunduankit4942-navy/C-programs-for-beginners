// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
#define sz 100
int main() {
   int n,a[sz],ser,fnd=-1;
   
    printf("Input the no. of numbers:\n");
    scanf("%d",&n);
    //if (n>sz) n=sz;
    // else n=n;
    n=(n>sz)? sz:n;
    printf("Input the %d numbers: \n",n);
    for(int i=0;i<n;i++){
       scanf("%d", &a[i]); 
    }
     printf("Input the no. to be searched:\n");
    scanf("%d",&ser);
     for(int i=0;i<n;i++){
         if(a[i]==ser){
             fnd=i;
             break;
         }
     }
     if(fnd==-1) printf("Element is not found");
     else printf("Element %d is found at position %d",ser,fnd);
    
    return 0;
}