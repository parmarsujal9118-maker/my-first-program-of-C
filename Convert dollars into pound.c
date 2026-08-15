#include<stdio.h>
int main() {
/*convert dollars into pound
where 1$ = 48 RS and 1 pound = 70 RS*/
float dollars,pound;
printf("Enter amount in dollars : ");
scanf("%f",&dollars);
printf("amount in pound is : %f\n",dollars * 48/70);
return 0;
}