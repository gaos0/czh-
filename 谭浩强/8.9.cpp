#include <stdio.h>
#include <stdlib.h>
void lettersnumber(char*arr,int j)
{
  char c;
int letters = 0, digits = 0, spaces = 0, other = 0;
for (int i = 0; i < j+1; i++)
{
  c=arr[i];
   if ((c >= 'A' && c <= 'Z')||(c>='a'&&c<='z'))
        {
            letters++;continue;
        }
        else if (c >= '0' && c <= '9')
        {
            digits++;continue;
        }
        else if (c == ' ')
        {
            spaces++;continue;
        }
        else
        {
            other++;
        }
}
other-=1;
 printf("%d %d %d %d", letters, digits, spaces, other);
}
int main()
{
    char c;
    char arr[100000];
    
     int j=0;
    while ((c = getchar()) !=EOF)
   {
    arr[j]=c;
    j++;  
   } 
   lettersnumber(arr,j);
    system("pause");
    return 0;
}