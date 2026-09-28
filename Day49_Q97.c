/* Q97. Print the initials of a name
ANSWER: */

#include<stdio.h>

int main(){
char str[100];
int i=0;

printf("Enter a name: ");
scanf("%[^\n]",str);

printf("%c.",str[0]);

while(str[i] != '\0')
{
if(str[i]==' ' && str[i+1] != '\0')
{
printf("%c.\n",str[i+1]);
}
i++;
}
return 0;}
