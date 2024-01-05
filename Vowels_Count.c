#include<stdio.h>
int main()
{
	char str[101];
	int count=0;
	scanf("%[^
]",str);
	for(int i=0;str[i]!=0;i++)
	{
		if('a'==str[i]||'e'==str[i]||'i'==str[i]||'o'==str[i]||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		count++;
	}
	printf("%d",count);
}