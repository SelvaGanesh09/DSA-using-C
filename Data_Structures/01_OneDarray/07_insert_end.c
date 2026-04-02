//get insert the given element at the end of the array
#include<stdio.h>
void get_value(int[],int);
void insert_end(int[],int,int);
void display(int[],int);
int main(void)
{
	int arr[10];
	int n;
	printf("Enter the number of values in array : ");
	scanf("%d",&n);
	get_value(arr,n);
	//insertion logic
	insert_end(arr,n,43);
	//displaying the new array
	n+=1;
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
void insert_end(int arr[],int n,int x)
{
	arr[n]=x;
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