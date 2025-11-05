#include <stdio.h>

int main() {
    double principal, rate, time, simple_interest; 
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%lf", &rate);
    printf("Enter Time (years): ");
    scanf("%lf", &time);
    simple_interest = (principal * rate * time) / 100.0; //formula for simple interest
    printf("Simple Interest is: %lf\n", simple_interest);
    return 0;
}