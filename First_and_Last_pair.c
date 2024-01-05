#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a=n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n%2==0)
    {
    for(i=0;i<n/2;i++)
    {
        printf("%d ",arr[i]);
        printf("%d ",arr[a-1]);
        a--;
    }
    }
    if(n%2!=0)
    {
        for(i=0;i<(n+1)/2;i++)
    {
        printf("%d ",arr[i]);
        if((a-1)>i)
        {
        printf("%d ",arr[a-1]);
        a--;
        }
        else
        printf("0");
    }
    }
}