#include<stdio.h>
int main() {
//Calculate area (A) & perimeter (P) of a rectangle//
float L,B,A,P;
printf("Enter length (L) & breadth (B) : ");
scanf("%f %f",&L,&B);
A = L*B;
printf("calculated area of a rectangle (A) : %.2f\n",A);
P = 2*( L + B);
printf("calculated perimeter of a rectangle (P) : %.2f\n",P);
return 0;
}
    