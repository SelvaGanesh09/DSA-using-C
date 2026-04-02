//Write a program to insert a number in an array that is already sorted in ascending order.
#include<stdio.h>
#include<unistd.h>
void get_value(int[],int);
void insert(int[],int*,int);
void display(int[],int);
int main(void)
{
	int arr[10];
	int n;
	int data=2;
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	get_value(arr,n);
	insert(arr,&n,data);
	display(arr,n);
	return 0;
}
void get_value(int arr[],int n)
{
	printf("---Give an array of values in ascending order---\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&arr[i]);
	}
	printf("---Values Collected---\n");
}
void insert(int arr[],int *n,int data)
{
	for(int i=*n-1;i>=-1;i--)
	{
		if(i==-1)
		{
			arr[0]=data;
			break;
		}
		if(arr[i]>data)
		{
			arr[i+1]=arr[i];
		}
		else
		{
			arr[i+1]=data;
			break;
		}
	}
	*n=*n+1;
	printf("Extra value getting inserted...");
	fflush(stdout);
	sleep(3);
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