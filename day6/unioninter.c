// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
#define sz 100
int main() {
   int nx,ny,p=0,q=0,c1=0,c2=0;
   int x[sz],y[sz]; 
   int z1[200],z2[sz];
    printf("Input the no. of elements of array X:\n");
    scanf("%d",&nx);
    
    nx=(nx>sz)? sz:nx;
    printf("Input the %d numbers in X: \n",nx);
    for(int i=0;i<nx;i++){
       scanf("%d", &x[i]); 
    }
    
     printf("Input the no. of elements of array Y:\n");
    scanf("%d",&ny);
    
    ny=(ny>sz)? sz:ny;
    printf("Input the %d numbers in Y: \n",ny);
    for(int i=0;i<ny;i++){
       scanf("%d", &y[i]); 
    }
    
    for(int i=0;i<nx;i++){
        for(int j =0;j<ny;j++){
            if(x[i]==y[j]){
                z2[p]=y[j];
                p++;
                c1=1;
                break;
            }
        }
    }
    for(int i=0;i<nx;i++){
        z1[q]=x[i];
        q+=1;
    }
    for(int i=0;i<ny;i++){
        c2=0;
        for(int j=0;j<nx;j++){
            if(y[i]==x[j]){
                c2=1;
                break;
            }
        }
        if(c2==0){
            z1[q]=y[i];
                q+=1;
        }
    }   
    
    printf("Union: \n");
    for(int i=0;i<q;i++) printf("%d ",z1[i]);
    
    if(c1==0) printf("\nNo intersection of elements is found");
    else{ printf("\nIntersection: \n");
    for(int i=0;i<p;i++) printf("%d ",z2[i]);
    }
    return 0;
}