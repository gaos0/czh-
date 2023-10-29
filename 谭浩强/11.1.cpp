#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
int x,y,z;
 scanf("%d%d%d",&x,&y,&z);
 int month[13]={0};
 for(int i=1;i<13;i++)
 {
   if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
   {
     month[i]=31;
   }
   else if(i==4||i==6||i==9||i==11)
   {
     month[i]=30;
   }
   else if(i==2)
   {
     month[i]=28;
   }
 }
int day=0;
for(int i=1;i<y;i++)
{
day+=month[i];
}
day+=z;
if(x%4==0&&x%100!=0)
{
  if(y>2)
  {
    day+=1;
  }
}
if(x%400==0)
{
  if(y>2)
  {
    day+=1;
  }
}printf("%d",day);
  system("pause");
    return 0;
}