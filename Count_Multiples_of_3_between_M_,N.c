#include<stdio.h>
int main()
{ int a,b,c=0;
scanf("%d%d",&a,&b);
for(int i=a;i<=b;i++)
{
    if(i%3 == 0)
{
    c++;
}
}
printf("%d",c);
}