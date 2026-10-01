#include<stdio.h>
int main(){
int arr[100];
int n,target;
int i;
int first=-1,last=-1;
printf("Enter size: ");
scanf("%d",&n);
printf("Enter sorted array:\n");

for(i=0;i<n;i++)
scanf("%d",&arr[i]);

printf("Enter target: ");
scanf("%d",&target);

for(i=0;i<n;i++)
{
if(arr[i]==target)
{
if(first==-1)
first=i;

last=i;
}
}
printf("First occurence = %d\n",first);
printf("Last occurence = %d\n",last);

return 0;}
