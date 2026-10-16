#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    int i,j,k,len,max,repeat;
    scanf("%999s",s);
    len=strlen(s);
    max=0;
    for(i=0;i<len;i++){
        repeat=0;
        for(j=i;j<len;j++){
            for(k=i;k<j;k++){
                if(s[k]==s[j]){
                    repeat=1;
                    break;
                }
            }
            if(repeat) break;
            if(j-i+1>max) max=j-i+1;
        }
    }
    printf("%d",max);
    return 0;
}
