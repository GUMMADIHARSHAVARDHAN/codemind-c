#include<stdio.h>
int main()
{ int n,n1=0,n2=1,n3,i;
scanf("%d",&n); 
printf("%d %d ",n1,n2);
for(i=1;i<=n-2;i++)
{
    n3 = n1+n2;
    n1=n2;
    n2=n3;
  printf("%d ",n3); 
}
}