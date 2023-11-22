#include<stdio.h>
int main()
{ int n,i,pro=1;
scanf("%d",&n);    
for(i=1;i<=n;i++)
{
    pro=pro*i;
}
printf("%d",pro);
}