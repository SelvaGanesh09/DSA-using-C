//Write a program to read and display values of an interger array. Allocate space dynamically for the array.--> using calloc
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *arr=NULL;
	int n;
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(*arr));
	if(arr==NULL)
	{
		printf("Memory is not allocated properly\n");
		exit(0);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
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
	free(arr);
	return 0;
}