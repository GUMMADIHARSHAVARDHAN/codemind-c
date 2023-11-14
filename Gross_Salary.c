#include<stdio.h>
int main()
{ float bs,da,hr,gs;
scanf("%f",&bs);
if(bs<=10000)  {
    da=(bs/100)*80;
     hr=(bs/100)*20;
}    
else if(bs>10000 and bs<=20000) {
    da=(bs/100)*90;
    hr=(bs/100)*25;
}   
else {
    da=(bs/100)*95;
    hr=(bs/100)*30;
}   
gs=bs+da+hr;
printf("%.2f",gs);    
}