//Write a program to delete a number from a given location in an array.
#include<stdio.h>
#include<stdlib.h>
void get_values(int**,int*);
void delete_pos(int*,int*,int);
int get_pos();
void display(int*,int);
int main()
{
	int *arr,n;
	get_values(&arr,&n);
	delete_pos(arr,&n,get_pos());
	display(arr,n);
	return 0;
}
void get_values(int **arr,int *n)
{
	printf("Enter number of elements : ");
	scanf("%d",n);
	*arr=(int*)malloc(sizeof(int)*(*n));
	for(int i=0;i<*n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",*(arr)+i);
	}
	printf("---Values Collected---\n");
}
void delete_pos(int *arr,int *n,int pos)
{
	while(pos<*n)
	{
		arr[pos-1]=arr[pos];
		pos++;
	}
	(*n)--;
}
int get_pos()
{
	int x;
	printf("Enter the position to delete : ");
	scanf("%d",&x);
	return x;
}
void display(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
}