#include<stdio.h>
int main()
{
	char str[100];
	int i=0;
	char ch=getchar();
	while(ch!=EOF)
	{
		str[i]=ch;
		i++;
		ch=getchar();
	}
	str[i]='\0';
	printf("%s",str);
	return 0;
}