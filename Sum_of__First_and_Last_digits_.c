#include<stdio.h>
int main()
{ int n,r,ds;
scanf("%d",&n);
ds=n%10;	
while(n>0)
   {
	  r=n%10;	  
	  n = n / 10;
}
printf("%d",r+ds);
}
