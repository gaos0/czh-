#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a[100]={0};
  int b[100]={0};
  char c[100]={'a'};
  int d;
  for(int i=0;;i++)
  {
  scanf("%d %c %d",&a[i],&c[i],&b[i]);
  if(c[i]=='?')
  {
  break;
  }
  d=i;
  }
  int j=0;

  while(j<d+1)
  {
 if(c[j]=='?')
 {
   break;
 }
  else if(c[j]=='+')
  {
    printf("%d\n",a[j]+b[j]);
  }
  else if(c[j]=='-')
  {
    printf("%d\n",a[j]-b[j]);
  }
  else if(c[j]=='*')
  {
    printf("%d\n",a[j]*b[j]);
  }
  else if(c[j]=='/'&&b[j]!=0)
  {
    printf("%d\n",a[j]/b[j]);
  }
  j++;
  }
  system("pause");
  return 0;
}