#include<stdio.h>
int main()
{
    int n,temp,digits=0,digit,sum=0,power,i;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        digits++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0)
    {
        digit=temp%10;
        power=1;
        for(i=1;i<=digits;i++)
            power=power*digit;
        sum=sum+power;
        temp=temp/10;
    }
    if(sum==n)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}
