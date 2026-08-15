#include<stdio.h>
int main() {
//convert celsius into Fahrenheit//
float celsius,fahrenheit;
printf("Enter temperature in celsius: ");
scanf("%f",&celsius);
fahrenheit = (celsius * 9/5) + 32;
printf("temperature in Fahrenheit is : %.2f\n",fahrenheit);
return 0;
}