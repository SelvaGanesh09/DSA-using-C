//Array of pointers as array elemets...C was amazing
#include<stdio.h>
int main(void)
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={0,2,4,5,6};
	int arr3[]={1,3,5,7,8};
	int *array[]={arr1,arr2,arr3};
	for(int i=0;i<3;i++)
	{
		printf("%d ",*array[i]);
	}
	printf("\n");
	return 0;
}