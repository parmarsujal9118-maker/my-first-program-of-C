#include<stdio.h>
int main() {
//convert Fahrenheit into celsius//
float celsius,fahrenheit;
printf("Enter temperature in Fahrenheit: ");
scanf("%f",&fahrenheit);
celsius = 5.0/9.0 * (fahrenheit - 32);
printf("temperature in celsius is : %.2f\n",celsius);
return 0;
}