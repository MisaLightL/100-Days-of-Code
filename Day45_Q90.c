/* Q90 Toggle case of each character in a string.

ANSWER:
*/

#include<stdio.h>

int main(){

int n;
char str[n];
int i=0;

printf("Enter a string: ");
scanf("%[^\n]",str);

if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
{
for(i=0;i<n;i++)
{
if(str[i]>='a')
{
str[i]-=32;}
else{
str[i]+=32;}}
printf("%c",str[i]);}
return 0;
}

