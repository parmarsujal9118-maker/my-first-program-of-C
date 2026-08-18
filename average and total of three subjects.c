#include<stdio.h>
int main() {
//calculate average of three subjects along with their total//
float sub1, sub2, sub3;
float total, average;
printf("Enter marks of sub1 : ");
scanf("%f",&sub1);
printf("Enter marks of sub2 : ");
scanf("%f",&sub2);
printf("Enter marks of sub3 : ");
scanf("%f",&sub3);
total = sub1 + sub2 + sub3;
printf("Total marks = %.2f\n",total);
average = total / 3;
printf("Average marks = %.2f\n",average);
return 0;
}
        