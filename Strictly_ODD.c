#include<stdio.h>
int main()
{ int n,i,count = 0,c=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(i%2 != 0 and a[i]%2 != 0){
    count++;
}
if(a[i]%2 != 0){
    c++;
}
}
if(count == c){
    printf("True");
}
else {
    printf("False");
}
}