#include <stdio.h>
#include <time.h>
#include "sstack.h"
#define SIZE 5



int main() {

    STACK stack;
    stack.tos=-1;
    stack.size=SIZE;
    int num, ch, dum=0;
    srand(time(NULL));

    while(1) {  //in finite Loop
        ch = getChoice();
        if (ch==1) {
            push(&stack, (rand()%100) );
        }
        else if (ch==2) {
            num = pop(&stack);
            printf("Number Popped %d\n", num);
        }
        else if (ch==3) {
            show(stack);
        }
        else break;
    }

    return 0;
}