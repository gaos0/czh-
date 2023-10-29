#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	int b=x>y?y:x;
    int a=b>z?z:b;
	int c=x>y?x:y;
	b=c>z?c:z;
	c=x+y+z-a-b;
	printf("%d %d %d",a,c,b);
system("pause");
return 0;
}