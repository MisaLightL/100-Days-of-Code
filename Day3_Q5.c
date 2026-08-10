#include <stdio.h>
int main(){
int a;
printf("Input the temperature in Celsius to be converted to Fahrenheit: ");
scanf("%d",&a);
int f=a*1.8;
int t=f+32;
printf("\nConverted Temp: %d\n",t);
return 0;}
