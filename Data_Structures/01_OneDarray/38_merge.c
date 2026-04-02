//Write a program to merge two sorted array
#include<stdio.h>
#include<stdlib.h>
void get_values(int**,int*);
void merge(int*,int*,int**,int,int,int*);
void display(int*,int);
int main(void)
{
	int *arr1,*arr2,*arr3,n1,n2,n3;
	get_values(&arr1,&n1);
	get_values(&arr2,&n2);
	merge(arr1,arr2,&arr3,n1,n2,&n3);
	display(arr3,n3);
	return 0;
}
void get_values(int **arr,int *n)
{
	printf("Enter number of elements in array : ");
	scanf("%d",n);
	*arr=(int*)malloc(sizeof(int)* (*n));
	for(int i=0;i<*n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",(*arr)+i);
	}		
}
void merge(int *arr1,int *arr2,int **arr3,int n1,int n2,int *n3)
{
	int i,j,k;
	*n3=n1+n2;
	*arr3=(int*)malloc(sizeof(int)*(*n3));
	i=j=k=0;
	while(i<n1 && j<n2)
	{
		if(*(arr1+i)<*(arr2+j))
		{
			*(*arr3+k)=*(arr1+i);
			k++;i++;
		}
		else
		{
			*(*arr3+k)=*(arr2+j);
			k++;j++;
		}
	}
	if(j<n2)
	{
		while(j<n2)
		{
			*(*arr3+k)=*(arr2+j);
			j++;k++;
		}
	}
	else if(i<n1)
	{
		while(i<n1)
		{
			*(*arr3+k)=*(arr1+i);
			i++;k++;
		}
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
