//Write a program to insert a number in an array that is already sorted in ascending order.
#include<stdio.h>
#include<stdlib.h>
void get_values(int**,int*);
int get_data();
void insert_new_element(int*,int*,int);
void display(int*,int);
int main(void)
{
	int *arr,n;
	get_values(&arr,&n);
	insert_new_element(arr,&n,get_data());
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
int get_data()
{
	int x;
	printf("Enter a Data to add in array :  ");
	scanf("%d",&x);
	return x;
}
void insert_new_element(int *arr,int *n,int data)
{
	for(int i=0;i<*n;i++)
	{
		if(arr[*n-1]<data)
		{
			arr[*n]=data;
		}
		if(arr[i]>data)
		{
			int j=*n;
			while(j>=i)
			{
				arr[j+1]=arr[j];
				j--;
			}
			arr[i]=data;
			break;
		}
	}

	(*n)++;
}
void display(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
}