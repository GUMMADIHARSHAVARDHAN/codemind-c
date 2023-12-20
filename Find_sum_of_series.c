#include<stdio.h>
int main()
{ float i,n,a,b=0;
scanf("%f",&n);
for(i=1;i<=n;i++)
{ 
    a = 1/i;
    b = b+a;
}
printf("%.2f",b);
}