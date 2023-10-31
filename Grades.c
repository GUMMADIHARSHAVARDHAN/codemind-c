#include<stdio.h>
int main()
{ int p,c,b,m,cs,x;
scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);    
x=(p+c+b+m+cs)/5;    
if(x>=90) {
    printf("Grade A");
}   
else if(x>=80) {
    printf("Grade B");
}
else if(x>=70) {
    printf("Grade C");
}
else if(x>=60) {
    printf("Grade D");
} 
else if(x>=40)
{
    printf("Grade E");
}
else {
    printf("Grade F");
} 
}