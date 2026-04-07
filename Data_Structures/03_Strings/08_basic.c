//Write a program to convert the lower case character string to upper case
#include<stdio.h>
void toUpper(char*);
int main()
{
	char str[100]="Education is a Festival";
	toUpper(str);
	puts(str);
	return 0;
}
void toUpper(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
		i++;
	}
}
