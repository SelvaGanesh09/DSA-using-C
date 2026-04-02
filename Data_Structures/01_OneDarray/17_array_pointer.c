#include<stdio.h>
int main(void)
{
	int arr[]={1,2,3,4,5};
	int *ptr,i;
	ptr=&arr[2];
	*ptr=-1;
	*(ptr+1)=0;
	*(ptr-1)=1;
	printf("Array is : ");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}