#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define Sa(a,b,c) (a+b+c)/2
#define area(S,a,b,c) S*(S-a)*(S-b)*(S-c)

int main()
{
 float a,b,c;
 scanf("%f%f%f",&a,&b,&c);
 float s=Sa(a,b,c);
float S=sqrt(area(s,a,b,c));
printf("%.3f",S);
    system("pause");
    return 0;
}