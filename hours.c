include<stdio.h>
#include<conio.h>
void main()
{
 int h,m;
 printf("Enter the minutes");
 scanf("%d",&m);
 h=m/60;
 m=m%60;
 printf("%d %d",h,m);
}
