#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
 float y;
 scanf("%f",&y);
 for (int i = 0; i < 3; i++)
 {
   for (int j = 0; j < i+1; j++)
   {
     printf("%6.2f",y);
   }
   printf("\n");
 }
 
 

    system("pause");
    return 0;
}