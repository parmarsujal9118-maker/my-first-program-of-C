#include<stdio.h>
int main()  { 
float num1, num2, num3;
float Largest, Smallest;
printf("Enter three numbers : ");
scanf("%f %f %f",&num1,&num2,&num3);
if(num3>=num2 && num3>num1) {
Largest = num3;
}
else if(num2>=num1 && num2>=num3) {
Largest = num2;
}
else {
Largest = num1;
}
if(num3<=num2 && num3<=num1) {
Smallest = num3;
}
else if (num2<=num1 && num2<=num3){
Smallest = num2;
}
else {
Smallest = num1;
}
printf("Largest number is %.2f\n",Largest);
printf("Smallest number is %.2f\n",Smallest);

return 0;
}