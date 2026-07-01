#include <stdio.h>

int main()
{
    int num;
    FILE *fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("File not found\n");
        return 0;
    }

    while(fscanf(fp, "%d", &num) == 1)
    {
        printf("%d\n", num);
    }

    fclose(fp);
    return 0;
}