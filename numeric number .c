#include<stdio.h>
#include<string.h>
void main()
{
    int a[50];
    printf("enter the sring");
    scanf("%c",a);
    if(a>65 && a<90 || a>97 && a<122)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
}
