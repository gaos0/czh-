#include<stdio.h>
#include<stdlib.h>


int main()
{
   int n;
   scanf("%d",&n);
	int arr[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%d",&arr[i]);
   }
   int m;
   int t=0;
   scanf("%d",&m);
   int arrtemp[m];
   for(int i=0;i<m;i++)
   {
      arrtemp[i]=arr[n-1-i];
   }
   for(int i=0;i<n;i++)
   {
      if(i+1<=n-m)
      {
         arr[n-i-1]=arr[n-m-i-1];
      }
       
      if(i+1>n-m)
      {        
         arr[n-i-1]=arrtemp[t];
         t++;
      }
   }
   for (int i = 0; i < n; i++)
   {
     printf("%d ",arr[i]);
   }
	system("pause");
	return 0;
}