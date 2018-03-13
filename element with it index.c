#include<stdio.h>
void main()
{
    int a,b[100],i;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the array");
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("print each elememt index");
    
        for(i=0;i<a;i++)
    {
    printf("\n%d\t%d\n",b[i],i);
}
}
