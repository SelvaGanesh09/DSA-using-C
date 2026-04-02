//Write a program to find whether the array of integers contains a duplicate number.
#include<stdio.h>
void get_value(int[],int);
void find_duplicate(int[],int);
int main(void)
{
	int arr[20];
	int n;
	printf("Enter the number of elements in an array : ");
	scanf("%d",&n);
	get_value(arr,n);
	find_duplicate(arr,n);
	return 0;
}
void get_value(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&arr[i]);
	}
	printf("---Values Collected---\n");
}
void find_duplicate(int arr[],int n)
{
	int flag=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j] && i!=j)
			{
				flag++;count++;
				printf("Dubplicate values founded in the indexs %d and %d\n",i,j);
			}
		}
	}
	if(flag==0)
	{
		printf("There is no Duplicate values in your array\n");
	}
	printf("There are %d duplicate values in your array\n",count);
}