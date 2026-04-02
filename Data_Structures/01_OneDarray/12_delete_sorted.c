//Write a program to delete a number from an array that is already sorted in ascending order.
#include<stdio.h>
void get_value(int[],int);
void display(int[],int);
int main(void)
{
	int arr[10];
	int n,value;
	int flag=0;
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	get_value(arr,n);
	printf("Enter the element in array to get deleted : ");
	scanf("%d",&value);
	//deleting logic
	for(int i=0;i<n;i++)
	{
		if(arr[i]==value)
		{
			while(i<n-1)
			{
				arr[i]=arr[i+1];
				i++;
			}
			flag++;
			break;
		}
	}
	if(flag!=0)
	{
		n-=1;
	}
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