//Write a program to merge two unsorted array
#include<stdio.h>
#include<stdlib.h>
void get_values(int**,int*);
void merge(int*,int*,int**,int,int,int*);
void display(int*,int);
int main(void)
{
	int *arr1,*arr2,*arr3;
	int n1,n2,n3;
	get_values(&arr1,&n1);
	get_values(&arr2,&n2);
	merge(arr1,arr2,&arr3,n1,n2,&n3);
	display(arr3,n3);
	return 0;
}
void get_values(int **arr,int *n)
{
	printf("Enter number of elements : ");
	scanf("%d",n);
	*arr=(int*)malloc(sizeof(int)*(*n));
	for(int i=0;i<*n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",*(arr)+i);
	}
}
void merge(int *arr1,int *arr2,int **arr3,int n1,int n2,int *n3)
{
	int x=0;
	*n3=n1+n2;
	*arr3=(int*)malloc(sizeof(int)* (*n3));
	for(int i=0;i<n1;i++)
	{
		*(*arr3+x)=*(arr1+i);
		x++;
	}
	for(int i=0;i<n2;i++)
	{
		*(*arr3+x)=*(arr2+i);
		x++;
	}
}
void display(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
}