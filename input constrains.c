#include<stdio.h>
void main()
{
    int b,a[100],c,i,j;
    printf("enter the limit");
    scanf("%d",&b);
    printf("enter the number");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    
        for(j=i+1;j<b;j++)
    
    if(a[i]>a[j])
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }
        printf("%d",a[i]);
        retun o;
}
