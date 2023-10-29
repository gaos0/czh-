#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun()
{
  int n,m;
  scanf("%d",&n);
  char str[n+1];
  scanf("%s",str);
  scanf("%d",&m);
  char str2[n-m+2];
  for(int i=0;str[i+m-1]!='\0';i++)
  {
    str2[i]=str[i+m-1];
    str2[i+1]='\0';
  }
  printf("%s",str2);
}
int main()
{
 fun();
  system("pause");
    return 0;
}