#include<stdio.h>
int main()
{ int n,i,os;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%2 != 0){
    os += a[i];
}
}
printf("%d",os);
}