#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            printf("%d",j);
            else
            printf("*");
        }
        printf("
");
    }
}