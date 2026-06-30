#include <stdio.h>
#include <stdlib.h>
#include "bracket.h"

void push(char stack[], int *tos, char ch, int size)
{    
    printf("Current TOS @ %d\n", *tos);
    if (!isFull(tos, size))
    {   (*tos)++;
        stack[*tos] = ch;
        printf("Char %c Pushed @ %d\n", ch, *tos);
    }
    else
    {   
        printf("Stack is Full (OVERFLOW)\n");
    }
}
int pop(char stack[], int *tos){
    char popped;
    if (!isEmpty(tos)) {
        popped =  stack[*tos];
        printf("Char %c Popped @ %d\n", popped, *tos);
        (*tos)--;
        return popped;
    }
    else {
        printf("Stack is Empty (UNDERFLOW) \n");
        return -1;
    }
}
int check(char str[], int *tos, int size)
{
    char stack[size];
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]== '(' || str[i]=='{' || str[i]=='['){
            push(stack, tos, str[i], size);
        }
        else if(str[i]==')' || str[i]=='}' || str[i]==']'){
            if(isEmpty(tos)){
                return 0;
            }
            char ch = pop(stack, tos);
            if((str[i]==')' && ch!='(') || (str[i]=='}' && ch!='{') || (str[i]==']' && ch!='[')){
                return 0;
            }
        }
    }
    if(!isEmpty(tos)){
        return 0;
    }
    return 1;
}
int isEmpty(int *tos) {
    return ( *tos == -1 );
}
int isFull(int *tos, int size) {
    return ( *tos == (size-1) );
}