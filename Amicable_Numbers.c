#include<stdio.h>
int main()
{ int n,i,sum=0,n1,sum1=0;
scanf("%d%d",&n,&n1);    
for(i=1;i<n;i++)
{ if(n%i == 0)
    {
     sum = sum+i;
     
    }
{  if(n1%i == 0){
    sum1 = sum1+i;
}
}
}
if(sum==n1&&sum1==n)
{
    printf("Amicable");
}
else {
    printf("Not Amicable");
}
}