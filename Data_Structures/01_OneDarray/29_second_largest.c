//Write a program to find the second largest of n number using an array.
#include<stdio.h>
#include<stdlib.h>
void get_values(int**,int*);
void display(int*,int);
int second_great(int*,int);
int main(void)
{
	int *arr,n,great;
	get_values(&arr,&n);
	display(arr,n);
	great=second_great(arr,n);
	printf("The greatest second element in an array is %d\n",great);
	return 0;
}
void get_values(int **arr,int *n)
{
	printf("Enter number of elements : ");
	scanf("%d",n);
	*arr=(int*)malloc(*n*sizeof(int));
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
int second_great(int *arr,int n)
{
	int first=0;
	int second=0;
	for(int i=0;i<n;i++)
	{
		if(*(arr+i)>first)
		{
			first=*(arr+i);
		}
	}
	for(int i=0;i<n;i++)
	{
			if(*(arr+i)>second && *(arr+i)!=first)
			{
				second=*(arr+i);
			}
	}

	return second;
}
//Trial--1
/*void display(int *arr)
{
	printf("Display function value 0 : %d\n",*(arr+0));
	arr[1]=20;
}
int main(void)
{
	int *arr;
	arr[0] = 10;
	printf("Main function value  0 : %d\n",*(arr+0));
	display(arr);
	printf("Main function value 1 : %d\n",*(arr+1));
	return 0;
}*/
//Trial 2
/*void display(int *arr)
{
	arr=(int*)malloc(sizeof(int)*4);
	arr[0]=10;
	arr[1]=20;
	arr[2]=30;
	arr[3]=40;
}
int main(void)
{	
	int *arr;
	display(arr);
	printf("%d\n",*(arr+0));
	return 0;
}*/