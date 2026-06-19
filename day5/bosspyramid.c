// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    
     for(int i=1;i<=n;i++){
         for(int k=n-1;k>(n-i);k--){
             printf("  ");
         }
         for(int j=1;j<=n-i+1;j++){
          printf("%d ",j);
         }
         for(int j=(n-i);j>=1;j--){
          printf("%d ",j);
      }     
       printf("\n");
     }
    
    for(int i=2;i<=n;i++){
         for(int k=1;k<=(n-i);k++){
             printf("  ");
         }
         for(int j=1;j<=i;j++){
          printf("%d ",j);
         }
      for(int j=(i-1);j>=1;j--){
          printf("%d ",j);
      }     
       printf("\n");
     }
    return 0;
}