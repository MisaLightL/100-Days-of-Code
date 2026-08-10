#include <stdio.h>
int main(){
int a;
int b;
printf("First number: ");
scanf("%d",&a);
printf("Second number: ");
scanf("%d",&b);
int s=a+b;
int d=a-b;
int p=a*b;
int q=a/b;
printf("Sum of these numbers: %d\n",s);
printf("Difference of these numbers: %d\n",d);
printf("Product of these numbers: %d\n",p);
printf("Quotient of these numbers: %d\n",q);
return 0;
}
