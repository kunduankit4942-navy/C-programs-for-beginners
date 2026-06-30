#include "sstack.h"

int getChoice(void) {
    int num;
    printf("Stack Menu: 1) Push, 2) Pop, 3) Show, 4) Exit => ");
    scanf("%d", &num);
    return num;
}

void show(STACK stack) {
    if (isEmpty(&stack)) {
        printf("Stack is Empty!!\n");
        return;
    }
    else {
        //printf("TOS = %d \n", *tos);
        for(int i=0; i<=(stack.tos); i++) {
            printf("%d->%d ", i, (stack.data[i]));
        }
        printf("\n");
    }
}
void push(STACK *stack, int num) {
    printf("Current  TOS @ %d\n", (stack->tos + 1));
    if (!isFull(stack)) {
        (stack->tos)++;
        stack->data[stack->tos]  = num;
        printf("..No %d Pushed @ %d\n", num, stack->tos);
    }
    else printf("Stack is Full!! (OVERFLOW)\n");
}
int pop(STACK *stack) {
    int popped;
    if (!isEmpty(stack)) {
        popped =  stack->data[ stack->tos ];
        //printf("..No %d Popped @ %d\n", popped, *tos);
        (stack->tos)--;
        return popped;
    }
    else {
        printf("Stack is Empty!! (UNDERFLOW) \n");
        return -1;
    }
}

int isEmpty(STACK *stack) {
    return ( stack->tos == -1 );
}
int isFull(STACK *stack) {
    return ( stack->tos == ((stack->size)-1) );
}

