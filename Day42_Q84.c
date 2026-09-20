/* Q84 COnvert a lowercase string to uppercase without using built-in functions.
ANSWER: */

#include<stdio.h>

int main(){

char str[100];
int i=0;

printf("Enter a string: ");
scanf("%[^\n]",str);

while(str[i] != '\0')
{
	if(str[i]>='a' && str[i]<='z')
	{str[i]+=32;}
i++;
}
printf("%s",str);
return 0;
}
