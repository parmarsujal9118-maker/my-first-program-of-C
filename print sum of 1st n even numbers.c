#include<stdio.h>
int main() {
int n, sum=0;
printf("Enter number (n) : ");
scanf("%d",&n);
for(int i=0;i<n;i++) 
{
sum = sum +(2*i+2);
}
printf("%d\n",sum);

return 0;
}