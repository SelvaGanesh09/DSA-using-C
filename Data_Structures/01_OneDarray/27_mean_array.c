//Write a program to find the mean of n numbers using array
#include<stdio.h>
#include<stdlib.h>
void get_value(int*,int*);
void check_NULL(int*);
int mean(int*,int);
int main(void)
{
	int *arr=NULL,n,ans;
	printf("Enter number of values in array : ");
	scanf("%d",&n);
	arr=(int*)malloc(n * sizeof(*arr));
	get_value(arr,&n);
	ans=mean(arr,n);
	printf("Mean of your array values is %d\n",ans);
	free(arr);
	return 0;
}
void get_value(int *arr,int *n)
{
	check_NULL(arr);
	for(int i=0;i<*n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",arr+i);
	}
	printf("---Values collected---\n");
}
void check_NULL(int *arr)
{
	if(arr==NULL)
	{
		printf("Memory is not allocated properly\n");
		exit(0);
	}
}
int mean(int *arr,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=*(arr+i); 
	}
	return sum/n;
}