#include<stdio.h>
void getValues(int[][10],int*,int*);
void display(int[][10],int,int);
int main()
{
    int arr[10][10]={0};
    int row,col;
    getValues(arr,&row,&col);
    display(arr,row,col);
    return 0;
}
void getValues(int arr[][10],int *row,int *col)
{
    printf("Enter number of rows : ");
    scanf("%d",row);
    printf("Enter number of columns : ");
    scanf("%d",col);
    for(int i=0;i<*row;i++)
    {
        for(int j=0;j<*col;j++)
        {
            printf("Enter a array value : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}
void display(int arr[][10],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}