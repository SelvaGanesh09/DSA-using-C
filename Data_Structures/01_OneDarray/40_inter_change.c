//Write a program to interchange the largest and the smallest number in an array
#include<stdio.h>
#include<stdlib.h>
void get_values(int**,int*);
void display(int*,int);
void inter_change(int*,int);
int small_index(int*,int);
int great_index(int*,int);
int main(void)
{
	int *arr,n;
	get_values(&arr,&n);
	display(arr,n);
	inter_change(arr,n);
	display(arr,n);
	return 0;
}
void get_values(int **arr,int *n)
{
	printf("Eneter number of elements : ");
	scanf("%d",n);
	*arr=(int*)malloc(sizeof(int)* (*n));
	for(int i=0;i<*n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",*(arr)+i);
	}
}
void display(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
}
void inter_change(int *arr,int n)
{
	int temp;
	int small=small_index(arr,n);
	int great=great_index(arr,n);
	temp=*(arr+small);
	*(arr+small)=*(arr+great);
	*(arr+great)=temp;
}	
int small_index(int *arr,int n)
{
	int small=*arr;
	int index=0;
	for(int i=0;i<n;i++)
	{
		if(*(arr+i)<small)
		{
			small=*(arr+i);
			index=i;
		}
	}
	return index;
}
int great_index(int *arr,int n)
{
	int great=*arr;
	int index=0;
	for(int i=0;i<n;i++)
	{
		if(*(arr+i)>great)
		{
			great=*(arr+i);
			index=i;
		}
	}
	return index;
}