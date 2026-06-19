// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    int n,r,c;
    printf("Enter the number limit: ");
    scanf("%d",&n);
    // size of square pattern
    r=2*n-1;
    c=r;
    
     for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            //it find the distance of each element from the edges
            int top=i-1;
            int left=j-1;
            int bottom=r-i;
            int right=r-j;
            //it finds the min dist from edges
            int min=top;
            if (left<min) min=left;
            if (right<min) min=right;
            if (bottom<min) min=bottom;
            
            printf("%d ",n-min);
            
        }
         
       printf("\n");
     }
  
    return 0;
}