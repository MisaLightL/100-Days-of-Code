/* Q83 Count vowels and consonants in a string.
ANSWER: */

#include<stdio.h>
int main(){
char str[100];
int i=0;
int Vcount=0;
int Ccount=0;

printf("ENtEr a StRiNg: ");
scanf("%[^\n]",str);

while(str[i] != '\0')
{
if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') ) {
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
{Vcount++;}
else{Ccount++;}
}
i++;
}
printf("Vowels: %d",Vcount);
printf(", Consonants: %d\n",Ccount);

return 0;
}

