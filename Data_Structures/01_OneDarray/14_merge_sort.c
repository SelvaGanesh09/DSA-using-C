#include<stdio.h>
void get_value(int[],int*);
void merge_sort(int[],int[],int[],int,int);
void display(int[],int);
int main(void)
{
	int arr1[10],n1;
	int arr2[10],n2;
	int arr3[20],n3;
	get_value(arr1,&n1);
	get_value(arr2,&n2);
	n3=n1+n2;
	merge_sort(arr1,arr2,arr3,n1,n2);
	display(arr3,n3);
	return 0;
}
void get_value(int arr[],int *n)
{
	printf("Enter number of elements in array : ");
	scanf("%d",n);
	for(int i=0;i<*n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&arr[i]);
	}
	printf("---Values Collected---\n");
}
void merge_sort(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
	int index,i,j;
	i=j=index=0;
	while(i<n1 && j<n2)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[index]=arr1[i];
			i++;index++;
		}
		else
		{
			arr3[index]=arr2[j];
			j++;index++;
		}
	}
	if(i==n1)
	{
		for(;j<n2;j++)
		{
			arr3[index]=arr2[j];
			index++;
		}
	}
	if(j==n2)
	{
		for(;i<n1;i++)
		{
			arr3[index]=arr2[i];
			index++;
		}
	}
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