#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define C(a,b) a>b?a:b
void compare(float a,float b,float c)
{
  float max1=a>b?a:b;
  float max2=max1>c?max1:c;
  printf("%.3f\n",max2);
}


int main()
{
 float a,b,c;
 scanf("%f%f%f",&a,&b,&c);
 compare(a,b,c);
 float max1=C(a,b);
 float max2=C(max1,c);
  printf("%.3f",max2);
 

    system("pause");
    return 0;
}