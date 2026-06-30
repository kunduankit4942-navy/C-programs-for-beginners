#include <stdio.h>

int fibo(int i)
{    
   if (i == 0)
        return 0;
   else if (i == 1)
        return 1;
   else
        return (fibo(i - 1) + fibo(i - 2));
}

int main()
{
    int n;

    printf("Enter the no of terms: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("%d ",fibo(i));
  }
    return 0;
}