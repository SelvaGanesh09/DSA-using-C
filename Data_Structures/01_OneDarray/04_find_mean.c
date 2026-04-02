#include<stdio.h>
void get_value(int[],int);
void display(int[],int);
int findMean(int[],int);
int main(void)
{
	int arr[20];
	int n;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	get_value(arr,n);
	printf("\nThe mean of your values is %d\n",findMean(arr,n));
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
int findMean(int arr[],int n)
{
	int sum=0;
	int mean;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	mean=sum/n;
	return mean;
}