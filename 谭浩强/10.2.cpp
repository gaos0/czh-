#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char*a,char*b)
{   
char p[100];
strcpy(p,a);
strcpy(a,b);
strcpy(b,p);
}
int main()
{
    char a[100];
    char b[100];
    char c[100];	
    scanf("%s",&a);
    scanf("%s",&b);
    scanf("%s",&c);
    if(strcmp(a,b)>0)swap(a,b);
    if(strcmp(a,c)>0)swap(a,c);
    if(strcmp(b,c)>0)swap(b,c);
    printf("%s\n%s\n%s",a,b,c);
	system("pause");
    return 0;
}