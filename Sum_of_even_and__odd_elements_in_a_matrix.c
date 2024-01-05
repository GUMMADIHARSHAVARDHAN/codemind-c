#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0,s1=0;
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
        for(j=0;j<c;j++)
        {
            if(mat[i][j]%2==0)
            sum+=mat[i][j];
            else
            s1+=mat[i][j];
        }
    }
    printf("%d %d",sum,s1);
}