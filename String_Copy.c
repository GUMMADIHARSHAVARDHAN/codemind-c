#include<stdio.h>
#include<string.h>
int main()
{
    char str[101],s[101];
    scanf("%[^
]",str);
    strcpy(s,str);
    printf("%s",s);
}