#include<stdio.h>
int main()
{ int i,n;
scanf("%d",&n);	
if(n%3 == 0 and n%5 == 0)
{
    printf("PlingPlang");
}
else if(n%3==0) {
    printf("Pling");
}
else if(n%5 == 0)
{
    printf("Plang");
}
else if(n%7 == 0)
{
    printf("Plong");
}
else {
    printf("%d",n);
}
}