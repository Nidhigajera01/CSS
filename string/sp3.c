// new line from space and first letter capital
#include <stdio.h>

void main()
{
    char stg[100];
    printf("Enter string : ")
    gets(stg);
    for (int i = 0; stg[i] != NULL; i++)
    {
        if(stg[0]>=97 && stg[0]<=122){
                stg[0] = stg[0] - 32;
            }
        printf("%c", stg[i]);
        

        if (stg[i] == 32 && stg[i+1] != 32)
        {
            printf("\n");
            if(stg[i+1]>=97 && stg[i+1]<=122){
                stg[i+1] = stg[i+1] - 32;
            }
        }
    }
}