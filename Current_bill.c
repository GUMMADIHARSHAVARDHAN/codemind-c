#include<stdio.h>
int main()
{ float u,sc,amount;
scanf("%f",&u);    
if(u<=199)   {
    sc=100;
    amount=(u*1.20)+sc;
}    
else if(u>=200 && u<400)    {
    sc=100;
    amount=(u*1.50)+sc;
}    
else if(u>=400 && u<600)   {
    sc=(u/100)*15;
    amount=(u+sc)*1.80;
}    
else  {
    sc=(u/100)*15;
    amount=(u+sc)*2;
}    
printf("%.2f",amount);
}