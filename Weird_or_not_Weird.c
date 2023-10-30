#include<stdio.h>
int main()
{ int n;
scanf("%d",&n);    
if(n%2!=0) 
{
    printf("weird");
}
else if(n%2==0 and n>=2 and n<=5)    
    {
        printf("not weird");
    }
else if(n%2==0 and n>=6 and n<=20)
{
    printf("weird");
}
else 
{
 printf("not weird");   
}
}



