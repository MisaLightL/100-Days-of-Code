#include <stdio.h>
int main(){
float a;
printf("Input the temperature in Celsius to be converted to Fahrenheit: ");
scanf("%.2f",&a);
double f=a*1.8;
double t=f+32;
printf("\nConverted Temp: %d",t);
return 0;}
