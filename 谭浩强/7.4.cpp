#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 1,5,8,6,4,0,9,3,2,10 };
	for (int i = 0; i < 10; i++)
	{
	scanf("%d",&arr[i]);
	}
    int temparr[5];
	for (int i = 0; i <5; i++)
	{
		temparr[i]=arr[i];
        arr[i]=arr[9-i];
        arr[9-i]=temparr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	system("pause");
	return 0;
}