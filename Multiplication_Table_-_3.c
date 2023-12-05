#include<stdio.h>
int main()
{  int a,b,n;
scanf("%d%d%d",&a,&b,&n);
int i;
for(i=b;i<=n;i++)
{
 printf("%d x %d = %d
",a,i,a*i);   
}
}