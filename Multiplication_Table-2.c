#include<stdio.h> 
int main ()
{
	int i,n,x;
	scanf("%d%d",&n,&x);
	for(i=1;i<=x;i+=1)
	printf("%d x %d = %d
",n,i,n*i);
}