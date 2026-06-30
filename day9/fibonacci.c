#include <stdio.h>

void fibbonacci(int n) {
    int a=0, b=1, nx;
    if(n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }
    else if(n == 1) {
        printf("Fibonacci Series: %d\n", a);
    }
    else {
        printf("Fibonacci Series: %d, %d", a, b);
        for(int i = 2; i < n; i++) {
            nx = a + b;
            printf(", %d", nx);
            a = b;
            b = nx;
        }
        printf("\n");
    }
}
int main(){
    int n;
    
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);
    fibbonacci(n);

}