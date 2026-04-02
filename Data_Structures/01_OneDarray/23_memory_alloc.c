//A call to malloc with an error check.
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *ip1=NULL;
	int *ip2=NULL;
	ip1=(int*)malloc(100*sizeof(int));
	if(ip1==NULL)
	{
		printf("Memory could not be allocated-->ip1\n");
	}
	else
	{
		printf("Memory allocated to ip1\n");
	}
	if(ip2==NULL)
	{
		printf("Memory could not be allocated-->ip2\n");
	}
	else
	{
		printf("Memory allocated to ip2\n");
	}
	return 0;
}