/*In a small company there are five saleman. Each saleman is supposed to sell three products. 
Write a program using a 2D array to print
(i) The total sales by each salesman.
(ii) Total sales of each item.
*/
#include<stdio.h>
void getSales(int[][3]);
void individualSales(int[][3]);
void itemSales(int[][3]);
int main()
{
    int sales[5][3];
    getSales(sales);
    individualSales(sales);
    itemSales(sales);
    return 0;
}
void getSales(int arr[][3])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the sales of person %d : ",i+1);
            scanf("%d",&arr[i][j]);
        }
    }
}
void individualSales(int arr[][3])
{
    int per=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            per+=arr[i][j];
        }
        printf("The total sales done %d salesman is %d\n",i+1,per);
        per=0;
    }
}
void itemSales(int arr[][3])
{
    int sal=0;
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<5;i++)
        {
            sal+=arr[i][j];
        }
        printf("The total sales of product %d is %d\n",j+1,sal);
        sal=0;
    }
}