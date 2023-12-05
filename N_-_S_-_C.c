#include<stdio.h>
int main()
{ int n,a,b,c;
scanf("%d%d",&a,&n);    
for(int i=a+1;i<=n-1;i++)
{
    b = i*i;
    c = i*i*i;
    printf("%d %d %d
",i,b,c);
}
}