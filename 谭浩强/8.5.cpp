#include<stdio.h>
#include<stdlib.h>
void nixuprint(int a,char arr[])
{
     for(int i=0;i<a;i++)
    {
        printf("%c",arr[a-i-1]);
    }
}
int main()
{
    int a=0;
    char arr[a];
char c;
 while ((c = getchar()) != '\n')
    {
        a++;
        arr[a-1]=c;
    }
    nixuprint(a,arr);
   
system("pause");
return 0;
}