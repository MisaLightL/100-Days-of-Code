#include<stdio.h>
int main()
{
    int n,temp,digits=0,divisor=1,digit;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        digits++;
        temp=temp/10;
    }
    for(int i=1;i<digits;i++)
        divisor=divisor*10;
    while(divisor>0)
    {
        digit=n/divisor;
        if(digit==0)
            printf("1");
        else
            printf("0");
        n=n%divisor;
        divisor=divisor/10;
    }
    return 0;
}
