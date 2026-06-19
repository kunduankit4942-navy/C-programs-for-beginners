#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter sides of triangle A, B, C: ");
    double a, b, c, p, s, area;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
    printf("Error: Invalid triangle sides.\n");
    return 1; 
    }


    if (a == b && b == c) {
        printf("Equilateral triangle\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles triangle\n");
    }
    else {
        printf("Scalene triangle\n");
    }
    p = a + b + c;
    
    printf("Perimeter of triangle is %lf\n", p);

    s = (a + b + c) / 2.0;
    area = pow(s * (s - a) * (s - b) * (s - c), 0.5);
    printf("Area of triangle is %lf\n", area);

    return 0;
}
