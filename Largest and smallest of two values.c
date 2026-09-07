#include<stdio.h>
int main()  { 
float num1, num2;
printf("Enter two numbers : ");
scanf("%f %f",&num1,&num2);
if(num1>num2) {
printf("Largest number is %.2f\n", num1);
printf("Smallest number is %.2f\n",num2);
}
else {
printf("Largest number is %.2f\n",num2);
printf("Smallest number is %.2f\n",num1);
}
return 0;
}