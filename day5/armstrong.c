// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
     int n,dn,an,r,c=0,d=0,s=0;
     printf("Input a number: ");
     scanf("%d",&n);
    dn=n;
    while(n>0){
        d=n%10;
       
        r=r*10+d;
        n=n/10;
        c+=1;
        an=pow(d,3);
        s+=an;
    }
   n=dn; 
 
  if(n==s)printf("It is an armstrong number");
  else printf("It is not an armstrong number");
    return 0;
}