#include <stdio.h>
#include <stdlib.h>

void push(char stack[], int *tos, char ch, int size);
int pop(char stack[], int *tos);
int check(char str[], int *tos, int size);
int isEmpty(int *tos);
int isFull(int *tos,  int size);

