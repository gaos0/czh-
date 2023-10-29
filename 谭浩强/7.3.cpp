#include<stdio.h>
#include<stdlib.h>
int main()
{
int arr[3][3];
scanf("%d %d %d",&arr[0][0],&arr[0][1],&arr[0][2]);
scanf("%d %d %d",&arr[1][0],&arr[1][1],&arr[1][2]);
scanf("%d %d %d",&arr[2][0],&arr[2][1],&arr[2][2]);
printf("%d %d",arr[0][0]+arr[1][1]+arr[2][2],arr[2][0]+arr[0][2]+arr[1][1]);
system("pause");
return 0;
}