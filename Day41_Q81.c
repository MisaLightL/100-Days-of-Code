/* Q.81 Count characters in a string without using built-in length functions
ANSWER: */

#include<stdio.h>

int main()
{char str[100];
int i=0;
int count=0;
printf("Enter a string: ");
scanf("%[^\n]",str);

while(str[i] != '\0')
{
count++;
i++;
}
printf("Length of the string = %d",count);
return 0;
}
