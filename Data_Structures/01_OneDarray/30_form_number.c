//Write a program to enter n number of digits. Form a number using these digits.
#include<stdio.h>
#include<stdlib.h>
void get_values(int**,int*);
long long int make_number(int[],int);
long long int my_power(int,int);
int main(void)
{
	int *arr,n;
	long long int number;
	get_values(&arr,&n);
	number=make_number(arr,n);
	printf("The number formation of your array is %lld\n",number);
	return 0;
}
void get_values(int **arr,int *n)
{
	printf("Enter the number of elements : ");
	scanf("%d",n);
	*arr=(int*)malloc(sizeof(int)*(*n));
	for(int i=0;i<*n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",*(arr)+i);
	}
	printf("---values collected---\n");
}
long long int make_number(int *arr,int n)
{	
	long long int num=0;
	int i=0;
	while(i<n)
	{
		num+=*(arr+i)*my_power(10,i);
		i++;
	}
	return num;
}
long long int my_power(int base,int power)
{
	long long int num=1;
	if(power==0)
	{
		return 1;
	}
	else
	{
		for(int i=0;i<power;i++)
		{
			num*=base;
		}
		return num;
	}
}