#include<stdio.h>
int main(){
    int n,i,leftSum=0,pivot=-1;
    scanf("%d",&n);
    int arr[n],total=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        total+=arr[i];
    }
    for(i=0;i<n;i++){
        if(leftSum==total-leftSum-arr[i]){
            pivot=i;
            break;
        }
        leftSum+=arr[i];
    }
    printf("%d",pivot);
    return 0;
}
