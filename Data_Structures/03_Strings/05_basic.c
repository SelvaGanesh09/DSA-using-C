#include<stdio.h>
void getStr(char*);
int main()
{
	char str[100];
	getStr(str);
	printf("%s",str);
	return 0;
}
void getStr(char *str)
{
	int i=0;
	char ch;
	while((ch=getchar())!= EOF)
	{
		str[i]=ch;
		i++;
	}
	str[i]='\0';
}