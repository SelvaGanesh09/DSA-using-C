#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter a string : ");
	scanf("%[^\n]",&str);
	printf("%10.6s\n",str);
	printf("%-10.6s\n",str);
	printf("%0.8s",str);
	return 0;
}