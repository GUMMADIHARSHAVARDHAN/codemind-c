#include<stdio.h>
int main()
{ int a,n,x,i=0;
scanf("%d",&a);    
n = a*a;    
while(n != 0)
{
    x = n%10;
    i += x;
    n = n/10;
}
if(a == i)
{
    printf("Neon Number");
}
else {
    printf("Not Neon Number");
}
}