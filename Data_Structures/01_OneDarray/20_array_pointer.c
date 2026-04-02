//An array of pointer basics
#include<stdio.h>
int main(void)
{
	int *ptr[10];
	int p=1,q=2,r=3,s=4,t=5;
	ptr[0]=&p;
	ptr[1]=&q;
	ptr[2]=&r;
	ptr[3]=&s;
	ptr[4]=&t;
	printf("%d \n",*ptr[3]);
	printf("---Printing all elements as example---\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",*ptr[i]);
	}
	printf("\n");
	return 0;
}