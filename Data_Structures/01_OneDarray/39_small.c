//Write a program to read an array of n numbers and then find the smallest number.
#include<stdio.h>
#include<stdlib.h>
void get_values(int**,int*);
int find_small(int*,int);
int main(void)
{
	int *arr,n;
	int small;
	get_values(&arr,&n);
	small=find_small(arr,n);
	printf("The smallest array elemet is %d\n",small);
	return 0;
}
void get_values(int **arr,int *n)
{
	printf("Enter number of elements in array : ");
	scanf("%d",n);
	*arr=(int*)malloc(sizeof(int)*(*n));
	for(int i=0;i<*n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",*(arr)+i);
	}
}
int find_small(int *arr,int n)
{
	int small=*arr;
	for(int i=0;i<n;i++)
	{
		if(*(arr+i)<small)
		{
			small=*(arr+i);
		}
	}
	return small;
}