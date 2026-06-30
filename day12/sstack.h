#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
typedef struct {
    int data[SIZE];
    int tos;
    int size;
} STACK;

void push(STACK *stack, int num);
int pop(STACK *stack);
int isEmpty(STACK *stack);
int isFull(STACK *stack);
void show(STACK stack);
int getChoice(void);
