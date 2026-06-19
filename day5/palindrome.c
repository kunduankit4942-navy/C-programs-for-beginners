// Online C compiler to run C program online
#include <stdio.h>

int main() {
     int n,dn,c=0,d=0,s=0,r=0;
     printf("Input a number: ");
     scanf("%d",&n);
    dn=n;
    while(n>0){
        d=n%10;
        s=s+d;
        r=r*10+d;
        n=n/10;
        c+=1;
    }
   n=dn; 
  printf("Original: %d Reverse : %d \n ",n,r);
  if(n==r)printf("It is a palindrome number");
  else
    return 0;
}