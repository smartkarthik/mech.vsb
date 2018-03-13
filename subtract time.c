#include<stdio.h>
void main()
{
    int t1,t2,m1,m2,h1,h2;
    printf("first time");
    scanf("%d %d",&t1,&m1);
    printf("second time");
    scanf("%d %d",&t2,&m2);
    h1=t1-t2;
    h2=m1-m2;
    printf("subtract abs value");
    printf("%d %d",h1,h2);
    
}
