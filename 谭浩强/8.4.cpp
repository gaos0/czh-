#include<stdio.h>
#include<stdlib.h>
int main()
{
int arr[3][3];
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
int temp1,temp2,temp3;
temp1=arr[0][1];
arr[0][1]=arr[1][0];
arr[1][0]=temp1;

temp2=arr[0][2];
arr[0][2]=arr[2][0];
arr[2][0]=temp2;

temp3=arr[2][1];
arr[2][1]=arr[1][2];
arr[1][2]=temp3;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
system("pause");
return 0;
}