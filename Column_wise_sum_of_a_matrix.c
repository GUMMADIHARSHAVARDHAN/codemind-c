#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int mat[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int sum;
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=mat[j][i];
        }
        printf("%d ",sum);
    }
}