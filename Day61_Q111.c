#include<stdio.h>
int main(){
    int n,k,i,j,first;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&k);
    if(k<1||k>n) return 0;
    for(i=0;i<=n-k;i++){
        first=0;
        for(j=i;j<i+k;j++){
            if(arr[j]<0){
                first=arr[j];
                break;
            }
        }
        printf("%d",first);
        if(i<n-k) printf(" ");
    }
    return 0;
}
