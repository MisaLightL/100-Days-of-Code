#include<stdio.h>
int main()
{
    int n,i,numerator=1,denominator=1;
    float sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(float)numerator/denominator;
        numerator=numerator+2;
        if(i==1)
            denominator=4;
        else
            denominator=denominator+2;
    }
    printf("%f",sum);
    return 0;
}
