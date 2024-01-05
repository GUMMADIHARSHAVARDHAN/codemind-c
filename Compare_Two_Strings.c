#include<stdio.h>
#include<string.h>
int main()
{
    char str[101],s[101];
    scanf("%[^
] %[^
]",str,s);
    if(strcmp(str,s)==0)
    printf("Strings are Equal");
    else
    printf("Strings are not Equal");
}