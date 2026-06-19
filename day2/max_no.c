// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Enter A and B: ");
    int a= scanf("%d",&a);
    int b= scanf("%d",&b);
    int m;
    if(a>b){
     m=a;   
    }
    else{
        m=b;
    }
printf("Maximum no:%d",m);
    return 0;
}