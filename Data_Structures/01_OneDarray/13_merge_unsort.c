//Write a program to merge two unsorted arrays.
#include<stdio.h>
#include<unistd.h>
void get_value(int[],int*);
void display(int[],int);
void merge(int[],int[],int[],int,int);
//void buffer_out();
int main(void)
{
	int arr1[10],n1;
	int arr2[10],n2;
	int arr3[20],n3;
	get_value(arr1,&n1);
	get_value(arr2,&n2);
	n3=n1+n2;
	merge(arr1,arr2,arr3,n1,n2);
	display(arr3,n3);
	return 0;
}
void get_value(int arr[],int *n)
{
	printf("Enter the number of elements in array : ");
	scanf("%d",n);
	for(int i=0;i<*n;i++)
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
void merge(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
	int index=0;
	for(int i=0;i<n1;i++)
	{
		arr3[index]=arr1[i];
		index++;
	}
	for(int i=0;i<n2;i++)
	{
		arr3[index]=arr2[i];
		index++;
	}
	printf("Arrays getting merged...\n");
	//buffer_out();
	//fflush(stdout);
	//sleep(3);
}
/*void buffer_out()
{
	char ch;
	while((ch=getchar())!='\n'){}
}*/