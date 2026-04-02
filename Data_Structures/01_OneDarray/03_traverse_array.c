#include<stdio.h>
void get_value(int[],int);
void display(int[],int);
int main(void)
{
	int arr[20];
	int n;
	printf("Enter the number of elements in an array : ");
	scanf("%d",&n);
	get_value(arr,n);
	display(arr,n);
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
void display(int arr[],int n)
{
	printf("\n---Values printed---\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
