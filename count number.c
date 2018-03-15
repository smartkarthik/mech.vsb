#include<stdio.h>

void main()
{
    char b[500];
    int c=0,i;
    printf("enter the character\n");
    scanf("%[^\n]s",&b);
    for(i=0;b[i]!='\0';i++)
    if(b[i]!=' ')
    {
        c++;
    }
    printf("count:%d",c);
}
