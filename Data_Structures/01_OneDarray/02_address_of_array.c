#include<stdio.h>
int main(void)
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int *BA = arr;                    // Base Address = &arr[0]
    int w = sizeof(int);              // width = size of one int (4 bytes)
    int lower_bound = 0;
    int k = 3;                        // 4th element → index 3

    // Correct formula: Address = BA + w * (k - lower_bound)
    int *address = (int *)((char *)BA + w * (k - lower_bound));

    printf("Base Address (arr)      : %p\n", (void *)BA);
    printf("Address of arr[%d] using formula: %p\n", k, (void *)address);
    printf("Direct address (&arr[3]): %p\n", (void *)&arr[3]);

	return 0;
}