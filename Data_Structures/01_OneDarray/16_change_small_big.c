//Write a program to interchange the largest and smallest number in an array
#include<stdio.h>
void get_values(int[],int*);
int small_index(int[],int);
int great_index(int[],int);
void interchange(int[],int);
void display(int[],int);
int main(void)
{
	int arr[10],n;
	get_values(arr,&n);
	interchange(arr,n);
	display(arr,n);
	return 0;
}
void get_values(int arr[],int *n)
{
	printf("Enter number of elements in array : ");
	scanf("%d",n);
	for(int i=0;i<*n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&arr[i]);
	}
	printf("---Values collected---\n");
}
int small_index(int arr[],int n)
{
	int small=arr[0];
	int index=0;
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
int great_index(int arr[],int n)
{
	int index=0;
	int great=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>great)
		{
			great=arr[i];
			index=i;
		}
	}
	return index;
}
void interchange(int arr[],int n)
{
	int temp;
	int small=small_index(arr,n);
	int great=great_index(arr,n);
	temp=arr[small];
	arr[small]=arr[great];
	arr[great]=temp;
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
