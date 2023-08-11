// capital to small and small to capital

#include <stdio.h>

void main()
{
    char stg[100];
    printf("Enter string : ");
    gets(stg);
    for (int i = 0; stg[i] != NULL; i++)
    {
        if (stg[i] >= 65 && stg[i] <= 90)
        {
            stg[i] = stg[i] + 32;
        }
        else if (stg[i] >= 97 && stg[i] <= 122)
        {
            stg[i] = stg[i] - 32;
        }
    }
    printf("\n");
    puts(stg);
}