#include<stdio.h>
int main(){
    int s,y;
    double b;
    printf("Enter salary and years of service: ");
    scanf("%d %d",&s,&y);
    if(y>5){
        b=s*0.1;
        if(y>10){
            b=s*0.2;

        }
    }
    else{
        b=0.5*s;
    }
    if(s>50000){
        b=b+0.2*s;
    }
    printf("Bonus is %lf\n",b);
    return 0;

}