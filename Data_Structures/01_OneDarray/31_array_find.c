//Write a program to find whether the array of integer contains a duplicated number.
#include<stdio.h>
#include<stdlib.h>
void get_values(int**,int*);
void duplicates(int*,int);
int main(void)
{
	int *arr,n;
	get_values(&arr,&n);
	duplicates(arr,n);
	return 0;
}
void get_values(int **arr,int *n)
{
	printf("Enter the number of elements : ");
	scanf("%d",n);
	*arr=(int*)malloc(sizeof(int)*(*n));
	for(int i=0;i<*n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",*(arr)+i);
	}
	printf("---values collected---\n");
}
void duplicates(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(arr+i)==*(arr+j))
			{
				printf("Duplicates scannned in location %d and %d is %d\n",i,j,*(arr+j));
			}
		}
	}
}