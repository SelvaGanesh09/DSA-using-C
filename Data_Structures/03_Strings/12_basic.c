#include<stdio.h>
void reverse(char*);
int length(char*);
int main()
{
	char str[100]="EDUCATION";

	reverse(str);
	puts(str);
	return 0;
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
void reverse(char *str)
{
	int len=length(str)-1;
	int i=0;

	char temp;
	while(i<len/2)
	{
		temp=str[i];
		str[i]=str[len-i];
		str[len-i]=temp;
		i++;
	}
}