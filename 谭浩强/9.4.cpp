#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define LEAP_YEAR1(y) y%4
#define LEAP_YEAR2(y) y%100
#define LEAP_YEAR3(y) y%400
int main()
{
 int y;
 scanf("%d",&y);
 int a=LEAP_YEAR1(y);
 int b=LEAP_YEAR2(y);
 int c=LEAP_YEAR3(y);
 if (a==0&&b!=0)
 {
   printf("L");
 }
 else if(c==0)
 {
   printf("L");
 }
 else
 {
   printf("N");
 }

    system("pause");
    return 0;
}