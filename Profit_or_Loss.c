#include<stdio.h>
int main()
{ int cp,sp;
scanf("%d%d",&cp,&sp);
if(cp == sp) {
    printf("No Profit and No Loss");
}    
else if(cp<sp)  
{
    printf("Profit");
}   
else {
    printf("Loss");
}
}