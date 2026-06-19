// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Enter A, B, C: ");
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int max=a;
    if(b>max) max=b;
    if(c>max)max=c;
    printf("Maximum no is:%d ", max);
    return 0;
}