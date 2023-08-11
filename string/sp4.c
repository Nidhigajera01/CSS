// reverse string
#include <stdio.h>

void main()
{
    char stg1[100],stg2[100];
    int n=-1,h;
    printf("Enter string : ");
    gets(stg1);
    for (int i = 0; stg1[i] != NULL; i++)
    {
        n++;
    }
    
    printf("%d",n);
    h=n;
    for(int i = 0; i<=h; i++){

        stg2[n]=stg1[i]; 
        n--;    
    }
    printf("\n");
    for(int i=0; stg2[i] != NULL; i++){
        printf(" %c",stg2[i]);
    }
    // puts(stg2);

}