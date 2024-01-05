#include<stdio.h>
int main()
{
    int r,c,i,j,sum;
    scanf("%d %d",&r,&c);
    int mat[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum+=mat[i][j];
        }
        printf("%d ",sum);
    }
}