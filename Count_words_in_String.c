#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[101];
    int count=0;
    scanf("%[^
]",str);
    for(int i=0;str[i]!=0;i++)
    {
        if(isspace(str[i]))
        count++;
    }
    printf("%d",count+1);
}