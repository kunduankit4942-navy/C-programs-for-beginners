#include <stdio.h>

int main()
{
    int num;
    FILE *fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("File not found\n");
        return 0;
    }

    while(1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num==0) break;
        fprintf(fp, "%d\n", num);
    }

    fclose(fp);
    return 0;
}