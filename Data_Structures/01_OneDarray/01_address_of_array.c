//Biggest dout the addresses holding hexdecimal value so, it feels hard to make the output
#include<stdio.h>
void check(int[]);
int main(void)
{	
	int arr[]={10,20,30,40,50,60,70,80};
	int *temp = &arr[0];
	int BA=*temp;
	int find=5;
	int index_size=sizeof(int);
	int x = BA + find*index_size;
	printf("The index %d has the address %d\n",x);
	check(arr);
	return 0;
}
void check(int *arr)
{
	for(int i=0;i<8;i++)
	{
		printf("%p ",arr+i);
	}
	printf("\n");
}