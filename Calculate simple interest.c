#include<stdio.h>
int main() {
//calculate interest//
float I, P, N, R;
printf("Enter the principal of amount (P) : ");
scanf("%f",&P);
printf("Enter the number of years (N) :");
scanf("%f",&N);
printf("Enter the rate of interest (R) :");
scanf("%f",&R);
I = (P * N * R) / 100;
printf("calculated simple interest (I) : %.2f\n",I);
return 0;
}
