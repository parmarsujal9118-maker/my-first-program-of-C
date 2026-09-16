#include<stdio.h>
int main() {
int n;
printf("Enter number (n) : ");
scanf("%d",&n);
for(int i=0;i<n;i++) 
{
printf("%d\n",2*i+2);
}
return 0;
}