#include <stdio.h>
#include <stdlib.h>

void push(int *stack, int *tos, int size, int num);
int pop(int *stack, int *tos);
int isEmpty(int *tos);
int isFull(int *tos,  int size);
void show(int *stack, int *tos);
int getChoice(void);
