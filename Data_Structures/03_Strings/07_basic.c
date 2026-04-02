//Program to find length of a string.
#include<stdio.h>
int length(char*);
void getLine(char*);
int main()
{
	char str[100]="Feel the educations as a festival";
	printf("Lenth of String : %d\n",length(str));
	printf("Enter Multiline string : ");
	getLine(str);
	printf("Lenth of String : %d",length(str));
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
void getLine(char *str)
{
	int i=0;
	char ch;
	while((ch=getchar())!=EOF)
	{
		str[i]=ch;
		i++;
	}
	str[i]='\0';
}