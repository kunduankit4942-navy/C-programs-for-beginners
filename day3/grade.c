#include<stdio.h>
int main(){
   int m;
   char c;
   printf("Enter marks: ");
   scanf("%d",&m);
   if (m>=60){
       c='D';
       if(m>=70){
              c='C';
              if(m>=80){
                c='B';
                if(m>=90){
                     c='A';
                     if(m>=95){
                        printf("Grade: %c Outstanding",c);
                        return 0;
                       }
                }
              }
       }
       printf("Grade: %c \n",c);
   }
    else{
        printf("Failed\n");
        return 0;
    }
    
    return 0;

}