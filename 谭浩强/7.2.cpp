#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 1,5,8,6,4,0,9,3,2,10 };
	for (int i = 0; i < 10; i++)
	{
	scanf("%d",&arr[i]);
	}
	for (int i = 0; i <10-1; i++)
	{
		for (int j = 0; j < 10-i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",arr[i]);
	}
	system("pause");
	return 0;
}