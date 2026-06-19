// Online C compiler to run C program online
// EDITING REQUIRED ****************************************************************************
// ********************************************
#include <stdio.h>

int main() {
     int n,c=0,d=0,s=0,r=0;
     printf("Input a number: ");
     scanf("%d",&n);
     
     printf("CNT\t\tDIG\t\tNUM\t\tSUM\t\tREV\n");
     printf("----------------------------------------\n");
    while(n>0){
        d=n%10;
        s=s+d;
        r=r*10+d;
        n=n/10;
        c+=1;
        printf("%d\t%d\t%d\n",c,d,n);
    }
    
    printf("CNT\t\tDIG\t\tNUM\t\tSUM\t\tREV\n");
     printf("----------------------------------------\n");
  printf("Sum of digits is: %d \n",s);
  printf("Reverse of number is: %d \n ",r);
    return 0;
}