#include <stdio.h>

void main()
{
    char s[50];
    printf("Enter username : ");
    gets(s);
    int cap = 0, dig = 0, spc = 0,n=0;

    while (n==0)
    {
        for (int i = 0; s[i] != NULL; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                cap++;
            }
            if (s[i] >= 48 && s[i] <= 57)
            {
                dig++;
            }
            if (s[i] >= 33 && s[i] <= 47 || s[i] >= 58 && s[i] <= 64 || s[i] >= 91 && s[i] <= 96 || s[i] == 126)
            {
                spc++;
            }
        }
        if(cap == 0 || dig == 0 || spc == 0)
        {
            printf("Enter username again : ");
            gets(s);
        }
        else{
            n=1;
        }
    }
    printf("uname is valid");
}