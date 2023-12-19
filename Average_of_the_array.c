#include<stdio.h>
int main()
{ int n,i;
float avg,ds=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]); 
}
for(i=0;i<n;i++)
{
    ds = ds+a[i];
}
    avg = ds/n;
    printf("%.2f",avg);
}