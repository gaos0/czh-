#include <stdio.h>
#include <stdlib.h>



int main()
{
  char c;
  while ((c=getchar())!=EOF)
  {
    if (c>='a'&&c<'z')
    {
      c=c+1;
    }
    else if (c=='z')
    {
      c='a';
    }
    printf("%c",c);   
  }
  

   system("pause");
   return 0;
}