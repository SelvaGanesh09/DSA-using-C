//Write a program to delete a number from a given location in an array.
#include<stdio.h>
void get_value(int[],int);
void display(int[],int);
int main(void)
{
	int arr[10];
	int n;
	int pos;
	printf("Enter number elements in an array : ");
	scanf("%d",&n);
	get_value(arr,n);
	printf("Enter the position to delete : ");
	scanf("%d",&pos);
	while(pos<n)
	{
		arr[pos-1]=arr[pos];
		pos++;
	}
	n-=1;
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