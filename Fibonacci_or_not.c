#include<stdio.h>
int main()
{ int n,n1=0,n2=1,n3;
scanf("%d",&n);    
while(n2<=n)
{
 n3 = n2+n1;   
 n1=n2;
 n2=n3;
}
if(n == n1)
{
	printf("True");
}
else {
	printf("False");
}
}