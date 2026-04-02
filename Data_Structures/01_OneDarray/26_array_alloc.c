//Write a program to read and display values of an interger array. Allocate space dynamically for the array.--> Realloc demonstration
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *arr=NULL;
	int n,x;
	printf("Enter the number of elemetns in array : ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(*arr));
	if(arr==NULL)
	{
		printf("Memory is not allocated properly\n");
		exit(0);
	}
	printf("--Before using realloc---\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",arr+i);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
	printf("Are you willing to add more elements [0 to exit] : ");
	scanf("%d",&x);
	if(x==0)
	{
		arr=(int*)realloc(arr,x); 
		exit(0);
	}
	else
	{
		arr=(int*)realloc(arr,sizeof(*arr)*(n+x));
		for(int i=n;i<n+x;i++)
		{
			printf("Enter a value : ");
			scanf("%d",arr+i);
		}
		for(int i=0;i<n+x;i++)
		{
			printf("%d ",*(arr+i));
		}
		printf("\n");
	}
	free(arr);
	return 0;
}