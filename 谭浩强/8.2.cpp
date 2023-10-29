#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
float d=b*b-4*a*c;
 float e;

if(d>=0)
{
    e=sqrt(d);
}
else if(d<0)
{
   e=sqrt(-d);
}

if(d==0)
{
    printf("x1=%.3f x2=%.3f",-b/(a*2),-b/(a*2));
}
else if(d!=0)
{
    printf("x1=%.3f+%.3fi x2=%.3f-%.3fi",-b/(a*2),e/(a*2),-b/(a*2),e/(a*2));
}

system("pause");
return 0;
}