include<stdio.h>

void main()
{
    char b[1000];
    int c=0,i,a=0;
    printf("enter the character\n");
    scanf("%[^\n]s",&b);
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]==' ')
        a++;
    }
    printf("number of words:%d",a+1);
}
