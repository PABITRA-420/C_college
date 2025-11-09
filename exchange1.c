#include <stdio.h> //exchange the values of two variables without using third variable

int main() {
    double a, b, c; 
    printf("Enter value for A: ");
    scanf("%lf", &a);
    printf("Enter value for B: ");
    scanf("%lf", &b);
    printf("Before exchange: A = %lf, B = %lf\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After exchange: A = %lf, B = %lf\n", a, b);
    return 0;
}