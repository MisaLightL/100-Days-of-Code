#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int nums[n],answer[n];
    for(i=0;i<n;i++) scanf("%d",&nums[i]);
    int left=1;
    for(i=0;i<n;i++){
        answer[i]=left;
        left*=nums[i];
    }
    int right=1;
    for(i=n-1;i>=0;i--){
        answer[i]*=right;
        right*=nums[i];
    }
    for(i=0;i<n;i++){
        printf("%d",answer[i]);
        if(i<n-1) printf(" ");
    }
    return 0;
}
