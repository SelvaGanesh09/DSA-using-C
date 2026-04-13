#include<stdio.h>
void append(char*,char*);
int length(char*);
int main()
{
	char str1[100]="Life is Beautiful\n";
	char str2[50]="Education is festival";

	append(str1,str2);

	puts(str1);
	return 0;
}
void append(char *str1,char *str2)
{
	int i=length(str1);
	int j=0;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;j++;
	}
}
int length(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}