#include <stdio.h> //conditional operator

int main() {
     double a1,a2,a3;
     printf("enter a number:");
     scanf("%lf",&a1);
     printf("enter another number:");    
     scanf("%lf",&a2);
     a3=(a1>a2)?a1:a2;
     printf("greater number is %lf",a3);
    
    return 0;
}