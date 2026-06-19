// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
#define sz 100
int main() {
   int n,a[sz],mxp=0,mnp=0;
   float s=0,avg,min,max;
    printf("Input the no. of numbers:\n");
    scanf("%d",&n);
    //if (n>sz) n=sz;
    // else n=n;
    n=(n>sz)? sz:n;
    printf("Input the %d numbers: \n",n);
    for(int i=0;i<n;i++){
       scanf("%d", &a[i]); 
    }
    min=a[0];
    max=a[0];
    for(int i=0;i<n;i++){
       s += a[i];
       if(a[i]>max) {
           max=a[i];
           mxp=i;
       }
       if(a[i]<min) {
           min=a[i];
           mnp=i;
       }
    }
     avg=s/(float)n;
     printf("Sum: %f Average: %f \n",s,avg);
     printf("Max: %f Min: %f \n",max,min);
     printf("Max position: %d Min position: %d \n",mxp,mnp);
    return 0;
}