#include<stdio.h>
#include<stdlib.h>
void exchange(char*arr,int a)
{
   int start=0,end=a-1;
  while(start<end)
  {
     char temp=arr[start];
     arr[start]=arr[end];
     arr[end]=temp;
     start++;
     end--;
  }
}

int main()
{
  char temparr[100];
  int a=0;
  int b=0;
  char c;
  while((c=getchar())!='\n')
  {
     temparr[a]=c;
     a++;
  }

  exchange(temparr,a);
  for (int i = 0; i < a; i++)
  {
     printf("%c",temparr[i]);
  }
   system("pause");	
	return  0;
}