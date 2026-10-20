#include<stdio.h>
int main(){
    int n,i,arrsum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        arrsum+=arr[i];
    }
    int expected=n*(n+1)/2;
    printf("%d",expected-arrsum);
    return 0;
}
