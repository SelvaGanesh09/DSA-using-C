//Write a program to print the position of the smallest number of n numbers using arrays.
#include<stdio.h>
#include<stdlib.h>
void get_value(int*,int);
int small_pos(int*,int);
int main(void)
{
	int *arr=NULL,n,pos;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	get_value(arr,n);
	pos=small_pos(arr,n);
	printf("The smallest element is %d and it position is %d\n",*(arr+pos),pos);
	return 0;
}
void get_value(int *arr,int n)
{
	if(arr==NULL)
	{
		printf("Memory is not allocated properly\n");
		exit(0);
	}
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",arr+i);
	}
	printf("---Values collected---\n");
}
int small_pos(int *arr,int n)
{
	int small=*(arr);
	int pos=0;
	for(int i=0;i<n;i++)
	{
		if(*(arr+i)<small)
		{
			small=*(arr+i);
			pos=i;
		}
	}
	return pos;
}