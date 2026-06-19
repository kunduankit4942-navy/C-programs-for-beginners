#include<stdio.h>
int main() {
    int bal,amt;
    printf("Input account balance and withdrawal amount: ");
    scanf("%d %d",&bal,&amt);
    if(amt<=bal){
        if(amt%100==0){
            printf("Withdrawal is successful.\n");
        }
        else{
            printf("Invalid denomination\n");
        }
    }
    else{
        printf("insufficient balance\n");
    }
    return 0;
    
}