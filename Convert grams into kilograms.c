#include<stdio.h>
int main() {
//convert grams into kilograms//
float grams,kilograms;
printf("Enter weight in grams : ");
scanf("%f",&grams);
printf("weight in kilograms is : %f\n",grams / 1000);
return 0;
}