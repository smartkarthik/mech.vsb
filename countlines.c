include<stdio.h>
void main()
{
    char a[500];
    int i=0,b=0;
    printf("enter the character");
    scanf("%[^\n]",&a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]=='.')
    b++;
    }
    printf("enter the sapce:%d",b);
    
}
