/*
---Column Major Order---
Address(A[i][j])=Base_Address + w{M(J-1) + (I-1)}
---Row Major Order---
Address(A[i][j])=Base_Address + w{N(I-1) + (J-1)}
*/
#include<stdio.h>
void display(int[][3]);
int main()
{
    int arr1[2][3]={10,20,30,40,50,60};
    int arr2[2][3]={{10,20,30},{10,20,30}};
    int arr3[][3]={{10,20,30},{10,20,30}};
    int arr4[2][3]={0};
    printf("---arr1---\n");
    display(arr1);
    printf("---arr2---\n");
    display(arr2);
    printf("---arr3---\n");
    display(arr3);
    printf("---arr4---\n");
    display(arr4);
    return 0;
}
void display(int arr[][3])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}