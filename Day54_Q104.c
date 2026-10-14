#include<stdio.h>
#include<math.h>
int main(){
    long long n,x;
    scanf("%lld",&n);
    long long sum=n*(n+1)/2;
    x=(long long)sqrtl(sum);
    if(x*x==sum) printf("%lld",x);
    else printf("-1");
    return 0;
}
