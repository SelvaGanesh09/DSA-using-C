//Write a program to print the position of the smallest number of n numbers using array.
#include<stdio.h>
void get_value(int[],int);
int smallest_index(int[],int);
int smallest_value(int[],int);
void display(int[],int);
int main(void)
{
	int arr[20];
	int n;
	printf("Enter the number of elements in array : ");
	scanf("%d",&n);
	get_value(arr,n);
	display(arr,n);
	printf("The smallest index of your array is %d\n",smallest_index(arr,n));
	printf("The smallest value of your array is %d\n",smallest_value(arr,n));
	return 0;
}
void get_value(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter the value : ");
		scanf("%d",&arr[i]);
	}
	printf("---values collected---\n");
}
int smallest_index(int arr[],int n)
{
	int index=0;
	int small=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			index=i;
		}
	}
	return index;
}
int smallest_value(int arr[],int n)
{
	int small=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
		}
	}
	return small;
}
void display(int arr[],int n)
{
	printf("\n---Values printed---\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}