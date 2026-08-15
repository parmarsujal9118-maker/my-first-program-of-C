#include<stdio.h>
int main() {
//convert minutes into hours//
float hours,minutes;
printf("Enter time in minutes");
scanf("%f",&minutes);
printf("hours is : %f\n",minutes / 60);
return 0;
}