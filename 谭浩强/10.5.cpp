#include<stdio.h>
#include<stdlib.h>


int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
      arr[i]=i+1;
   }
   int b=1;
   int c=n;
   for(int i=1;i<n+1;i++)
   {
      if(arr[i-1]==0)
     {
           if(i==n)
     {
        i=0;
     }
        continue;
     }  
     if(arr[i-1]!=0)
     {
        if(b%3==0)
     {
        arr[i-1]=0;
        c--;
        if(c==1)
      {        
         break;
      }    
     }
     }
      b++;
         if(i==n)
     {
        i=0;
     }
   }
   for(int i=0;i<n;i++)
   {
      if(arr[i]!=0)
      {
         printf("%d",arr[i]);
      }
    
   }
	system("pause");
	return 0;
}