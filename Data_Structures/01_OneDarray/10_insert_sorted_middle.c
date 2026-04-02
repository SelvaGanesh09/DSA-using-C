//Write a program to insert a number in an array that is already sorted in asceding order.
#include<stdio.h>
#include<unistd.h>
void get_value(int[],int);
void display(int[],int);
int main(void)
{
	int arr[10];
	int n,data;
	printf("Enter the number of elements in array : ");
	scanf("%d",&n);
	get_value(arr,n);
	printf("Enter the value to get inserted : ");
	scanf("%d",&data);
	//logic of insertion
	printf("\nInserting your new array...\n");
	sleep(3);
	for(int i=0;i<n;i++)
	{
		if(arr[i]>data)
		{
			for(int j=n-1;j>=i;j--)
			{
				arr[j+1]=arr[j];
			}
			arr[i]=data;
			n+=1;
			break;
		}
		else if(arr[n-1]<data && i==n-1)
		{
			arr[n]=data;
			n+=1;
			break;
		}
	}
	//display the new array
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