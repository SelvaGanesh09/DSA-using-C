//Write a program to delete a number from an array that is already sorted in ascending order.
#include<stdio.h>
#include<stdlib.h>
void get_values(int**,int*);
void delete(int*,int*,int);
int get_data(void);
void display(int*,int);
int main(void)
{
	int *arr,n;
	get_values(&arr,&n);
	delete(arr,&n,get_data());
	display(arr,n);
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
		scanf("%d",*(arr)+i);
	}
	printf("---Values Collected---\n");
}
void delete(int *arr,int *n,int element)
{
	int flag=0;
	for(int i=0;i<*n;i++)
	{
		if(*(arr+i)>=element)
		{
			arr[i]=arr[i+1];
			flag++;
		}
	}
	if(flag!=0)(*n)--;
}
int get_data(void)
{
	int x;
	printf("Enter the value delete : ");
	scanf("%d",&x);
	return x;
}
void display(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
}