#include<stdio.h>
//Comparing two strings ignoring casses

int compare(char*,char*);
int length(char*);
int main()
{
	char str1[100],str2[100];

	printf("Enter string one : ");
	gets(str1);
	printf("Enter string two : ");
	gets(str2);

	if(compare(str1,str2))
	{
		printf("Two strings are equal\n");
	}
	else
	{
		printf("Two strings are not equal\n");
	}
	return 0;
}
int compare(char *str1,char *str2)
{
	int i=0;
	int j=0;

	if(str1[i]!=str2[j])
	{
		return 0;
	}

	while(str1[i]!='\0' && str2[j]!='\0')
	{
		if(str1[i]==str2[j])
		{
			i++;
			j++;
		}
		else
		{
			return 0;
		}
	}

	if(length(str1)==i && length(str2)==j)
	{
		return 1;
	}
	else
	{
		return 0;
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