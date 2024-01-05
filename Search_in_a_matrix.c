#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int mat[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int s,count=0;
    scanf("%d",&s);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s==mat[i][j])
            count++;
        }
    }
    printf("%d",count);
}