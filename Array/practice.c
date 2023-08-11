#include<stdio.h>

int main()
{
    char c[100];
    int i;
    printf("enter your name:=");
    scanf("%s",&c);

    printf("\n\n%s",c);

    for(i=0;c[i]!=NULL;i++)
    {

        printf("\nc[%d]=%c",i,c[i]);
    }
    return 0;
}