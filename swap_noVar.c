#include <stdio.h>

int main() {
    int a,b;
    printf("Enter A and B:");
    scanf("%d",&a);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swapped numbers are A=%d and B=%d \n",a,b);

    return 0;
}