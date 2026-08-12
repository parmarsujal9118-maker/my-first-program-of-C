#include<stdio.h>
int main() 
{
//a is a radius and b is a area of circle//
float a,b;
printf("enter radius of a circle");
scanf("%f",&a);
b = 3.14*a*a;
printf("area of a circle is %.2f",b);
return 0;
}