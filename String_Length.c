#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%[^
]",str);
    printf("%d",strlen(str));
}