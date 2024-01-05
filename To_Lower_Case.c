#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%[^
]",str);
    for(int i=0;str[i]!=0;i++)
    {
        int ch1=tolower(str[i]);
        printf("%c",ch1);
    }
}