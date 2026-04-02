#include<stdio.h>
int main(void)
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int *ptr1,*ptr2;
	ptr1=arr;
	ptr2=arr+2;
	printf("%ld \n",(ptr2-ptr1));
	return 0;
}