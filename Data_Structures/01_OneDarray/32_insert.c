//Write a program to insert a number at a given location in an array.
#include<stdio.h>
#include<stdlib.h>
void get_values(int**,int*);
int get_pos();
void insert_element(int*,int*,int,int);
void display(int*,int);
int main(void)
{
	int *arr,n;
	get_values(&arr,&n);
	insert_element(arr,&n,43,get_pos());
	display(arr,n);
	return 0;
}
void get_values(int **arr,int *n)
{
	printf("Enter number of elements : ");
	scanf("%d",n);
	*arr=(int*)malloc(sizeof(int)* (*n));
	for(int i=0;i<*n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",*(arr)+i);
	}
	printf("---Values Collected---\n");
}
int get_pos()
{
	int x;
	printf("Enter the position to insert a extra element : ");
	scanf("%d",&x);
	return x;
}
void insert_element(int *arr,int *n,int data,int pos)
{
	if(pos==*n)
	{
		(*n)++;
		arr[pos]=data;
	}
	else
	{
		int i=*n-1;
		while(i>=pos-1)
		{
			arr[i+1]=arr[i];
			i--;
		}
		arr[pos-1]=data;
		(*n)++;
	}
}
void display(int *arr,int n)
{
	printf("---Updated array---\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
}