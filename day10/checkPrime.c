#include <stdio.h>
#include "isPrime.h"


int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

     printf("Prime elements are: ");

    for (i = 0; i < n; i++)
    {
        if (isPrime(arr[i])) 
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}