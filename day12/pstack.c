#include "pstack.h"

int getChoice(void) {
    int num;
    printf("Stack Menu: 1) Push, 2) Pop, 3) Show, 4) Exit => ");
    scanf("%d", &num);
    return num;
}

void show(int *stack, int *tos) {
    if (isEmpty(tos)) {
        printf("Stack is Empty!!\n");
        return;
    }
    else {
        printf("TOS = %d \n", *tos);
        for(int i=0; i<=(*tos); i++) {
            printf("%d->%d ", i, *(stack + i));
        }
        printf("\n");
    }
}
void push(int *stack, int *tos,  int size, int num) {
    printf("Current  TOS @ %d\n", *tos+1);
    if (!isFull(tos, size)) {
        (*tos)++;
        *(stack + *tos) = num;
        printf("..No %d Pushed @ %d\n", num, *tos);
    }
    else printf("Stack is Full!! (OVERFLOW)\n");
}
int pop(int *stack, int *tos) {
    int popped;
    if (!isEmpty(tos)) {
        popped =  *(stack + *tos);
        //printf("..No %d Popped @ %d\n", popped, *tos);
        (*tos)--;
        return popped;
    }
    else {
        printf("Stack is Empty!! (UNDERFLOW) \n");
        return -1;
    }
}

int isEmpty(int *tos) {
    return ( *tos == -1 );
}
int isFull(int *tos, int size) {
    return ( *tos == (size-1) );
}

