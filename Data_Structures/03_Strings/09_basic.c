//Write a program to convert the Upper case character string to Lower case
#include<stdio.h>
void toLower(char*);
int main()
{
	char str[100]="EducATion is a FestiVAl";
	toLower(str);
	puts(str);
	return 0;
}
void toLower(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		i++;
	}
}
