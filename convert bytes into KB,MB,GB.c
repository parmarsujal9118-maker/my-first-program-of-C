#include<stdio.h>
int main() {
//convert bytes into KB,MB,GB//
float bytes,KB,MB,GB;
printf("Enter bytes : ");
scanf("%f",&bytes);
printf("KB is : %f\n",bytes / 1024);
printf("MB is : %f\n",bytes / 1048576);
printf("GB is : %f\n",bytes / 1073741824);
return 0;
}