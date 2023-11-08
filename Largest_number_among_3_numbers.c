#include<stdio.h>
int main()
{ int a,b,c;
scanf("%d%d%d",&a,&b,&c);    
if(a>b and a>c)  {
    printf("%d",a);
}    
else if(b>a and b>c)   {
    printf("%d",b);
}    
else {
    printf("%d",c);
}    
}