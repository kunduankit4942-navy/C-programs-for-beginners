// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
#define sz 20
int main() {
   int n=20,dv,c,k;
   int a[sz];
   
    printf("Input the 20 numbers in A: \n");
    for(int i=0;i<n;i++){
       scanf("%d", &a[i]); 
    }
    printf("Frequency of each element is: \n");
    for(int i=0;i<n;i++){
        k=0;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                k=1;
                break;
            }
        }
        if(k==0){
        dv=a[i];
        c=0;
        for(int j=0;j<n;j++){
            if(dv==a[j]){
                c+=1;
            }
         }
        
        printf("%d : %d \n",a[i],c);
        }
    }
    
    
    return 0;
}