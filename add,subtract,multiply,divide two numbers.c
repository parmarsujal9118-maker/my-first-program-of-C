#include<stdio.h>
int main() {
//add, subtract,multiply and divide two numbers//
float a,b,c;
printf("Enter value of a and b");
scanf("%f %f",&a,&b);
c = a + b;
printf("%f + %f = %f\n",a,b,c);
c = a - b;
printf("%f - %f = %f\n",a,b,c);
c = a * b;
printf("%f * %f = %f\n",a,b,c);
c = a / b;
printf("%f / %f = %f\n",a,b,c);
return 0;
}