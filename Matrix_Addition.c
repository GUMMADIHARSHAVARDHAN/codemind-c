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
    int r,c;
    scanf("%d %d",&r,&c);
    int matr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&matr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         printf("%d ",mat[i][j]+matr[i][j]);
        }
    
        printf("
");
    }
}