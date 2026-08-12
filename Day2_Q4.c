// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main(){
int r;
printf("Input radius: ");
scanf("%d",&r);
float pi=3.14;
float a=pi*r*r;
printf("\nArea = %.2f",a);
float c=pi*2*r;
printf("\nCircumference = %.2f\n",c);
return 0;}
