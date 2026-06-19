// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int v=1;
     for(int j=0;j<=i;j++){
         printf("%d ", v);
         
         v=v*(i-j)/(j+1);
     }
      printf("\n");
    }
    return 0;
}