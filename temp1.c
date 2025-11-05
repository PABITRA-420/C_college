#include <stdio.h> //farenheit to centigrade conversion

int main() {
    double celsius, fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    printf("Celsius Temperature: %lf \n", celsius);
    return 0;
}