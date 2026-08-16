#include<stdio.h>
int main() {
//calculate area (A)and perimeter(P) of a square//
float side;
printf("Enter side of a square : ");
scanf("%f",&side);
printf("calculated area of a square is (A) : %.2f\n",side * side);
printf("calculated perimeter of a square is (P) : %.2f\n",4 * side);
return 0;
}
