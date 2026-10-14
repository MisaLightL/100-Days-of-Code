#include<stdio.h>
int main(){
    int n,i,current,max;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    current=max=arr[0];
    for(i=1;i<n;i++){
        if(current+arr[i]<arr[i]) current=arr[i];
        else current+=arr[i];
        if(current>max) max=current;
    }
    printf("%d",max);
    return 0;
}
