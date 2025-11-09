#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;
    printf("Enter one side of the triangle: ");
    scanf("%lf", &a);
    printf("Enter the second side of the triangle: ");
    scanf("%lf", &b);
    printf("Enter the third side of the triangle: ");
    scanf("%lf", &c);
    
    if (a + b <= c || b + c <= a || a + c <= b || a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid triangle sides\n");
        return 1;
    }
    
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle = %lf\n", area);
    return 0;
}
//semi perimeter(s)=a+b+c/2
//area=sqrt(s*(s-a)*(s-b)*(s-c))