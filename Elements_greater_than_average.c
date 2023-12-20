#include<stdio.h>
int main()
{
int count=0,i,n,avg,ds=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]); 
    ds = ds+a[i];
}
    avg = ds/n;
for(i=0;i<n;i++)
{
  if(a[i] >= avg) {
      count++;
  }
}
printf("%d",count);
}