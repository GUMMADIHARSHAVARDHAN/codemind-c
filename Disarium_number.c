#include<stdio.h>
#include<math.h>
int main()
{ int i,n,a,r,rev=0;
scanf("%d",&n);
a = n;
int b=0,c;
while(n>0)
{  
    r = n%10;
    rev = rev*10+r;
    n = n/10;
}
for(i=1;i<=rev;i++)
{
    c = rev % 10;
    b = pow(c,i)+b;
    rev = rev / 10;
    
}
if(b == a)
{
    printf("True");
}
else {
    printf("False");
}
}