#include<stdio.h>
int main(){
    int n,i,j,count,found=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count>n/2){
            printf("%d",arr[i]);
            found=1;
            break;
        }
    }
    if(!found) printf("-1");
    return 0;
}
