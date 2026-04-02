//Write a program to insert a number at a given location in an array.
#include<stdio.h>
void get_value(int[],int);
void display(int[],int);
void insert_middle(int[],int,int,int*);
int main(void)
{
	int arr[10];
	int n;
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	get_value(arr,n);
	//insertion in middle logic
	int pos=3;
	int data=43;
	insert_middle(arr,pos,data,&n);
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
void insert_middle(int arr[],int pos,int data,int *n)
{
	for(int i=*n-1;i>=pos-1;i--)
	{
		arr[i+1]=arr[i];
	}
	printf("Inserting a extra data in %d\n",pos);
	arr[pos-1]=data;
	*n=*n+1;	
}