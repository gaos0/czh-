#include<stdio.h>
#include<stdlib.h>
int main()
{
int a=10000;
int f;
int b=0;
scanf("%d",&f);
for(int i=2;i<a+1;i++)
{
int m=1,n=0;
for(int j=2;j<i+1;j++)
{
if(i%j==0)
{
m=j;
n+=m;
if(n==i&&m==i&&f==i)
{
    printf("prime");
    b+=1;
    break;
}
}
}
}
if(b==0)
{
    printf("not prime");
}
system("pause");
return 0;
}