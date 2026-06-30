#include <stdio.h>
#include <time.h>

#include "pstack.h"
#define SIZE 5

int main() {

    int *STACK;
    int TOS=-1;
    int num, ch, dum=0;
    srand(time(NULL));
    STACK = (int *) calloc(SIZE, sizeof(int));
    while(1) {  //in finite Loop
        ch = getChoice();
        if (ch==1) {
            push(STACK, &TOS, SIZE, (rand()%100) );
        }
        else if (ch==2) {
            num = pop(STACK, &TOS);
            printf("Number Popped %d\n", num);
        }
        else if (ch==3) {
            show(STACK, &TOS);
        }
        else break;
    }

    return 0;
}