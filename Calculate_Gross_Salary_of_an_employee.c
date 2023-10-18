#include<stdio.h>
int main()
{ float bs,gs,hra,da,pf;
scanf("%f%f%f",&bs,&hra,&da);    
pf=(bs*12)/100;    
gs=bs+hra+da+pf;    
printf("%.2f
%.2f
",pf,gs);    
}