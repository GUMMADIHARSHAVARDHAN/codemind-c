#include<stdio.h>
#include<math.h>
int main()
{
int n,i,os=0,es=0;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i = 0 ; i < n; i++)
{
if(arr[i]%2 == 0){
es += arr[i];
}
else
{
os += arr[i];
}
}
 printf("%d",abs(os-es));
}