//Write a program to read an array of n numbers and then find the smallest number.
#include<stdio.h>
void get_value(int[],int*);
int find_small(int[],int);
void print_small(int);
int main(void)
{
	int arr[10],n,small;
	get_value(arr,&n);
	small=find_small(arr,n);
	print_small(small);
	return 0;
}
void get_value(int arr[],int *n)
{
	printf("Enter the number of elements in array : ");
	scanf("%d",n);
	for(int i=0;i<*n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&arr[i]);
	}
	printf("---Values Collected---\n");
}
int find_small(int arr[],int n)
{
	int small=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<small) small=arr[i];
	}
	return small;
}
void print_small(int small)
{
	printf("The smallest number in array is %d\n",small);
}