/* Q98. Print initials with the surname displayed in full
ANSWER:  */

#include<stdio.h>

int main(){
char str[100];
int i=0;
int lws=0; //lws = Last Word Start

printf("Enter a name: ");
scanf("%[^\n]",str);

/* Find where the last word begins */
while(str[i] != '\0')
{
if(str[i]==' ')
{lws=i+1;}
i++;
}

/* Print initials of all words before surname  */
printf("%c.",str[0]);
i=0;
while(i<lws-1){
if(str[i]==' ')
{
printf("%c.",str[i+1]);
}
i++;
}
printf(" ");

/* Print surname */
while(str[lws] != '\0'){
lws++;
}

return 0;
}
