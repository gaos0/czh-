#include<stdio.h>
#include<stdlib.h>
int main()
{
   char arr[10];
   char c;   
   int j=0;
    while ((c = getchar()) !=EOF)
   {
      if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
      {
         arr[j]=c;
         j++;
      }
   } 
      arr[j+1]='\0';
          printf("%s",arr); 
         
   system("pause");	
	return  0;
}