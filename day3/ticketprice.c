#include<stdio.h>
int main(){
    int age,s;
    double p;
    printf("Input your age: ");
    scanf("%d",&age);
    printf("Input show type: 1 for regular, 2 for premium: ");
    scanf("%d",&s);

    if(s==1) p=150;
    else if(s==2) p=250;
    else {
        printf("Invalid show type");
        return 0;
    }

    if (age<12) p=p*0.5;
    else if (age>=60) p=p*0.75;

    printf("Ticket price is %lf\n",p);
    return 0;

}