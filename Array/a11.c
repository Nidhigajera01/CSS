// row & column sum
#include <stdio.h>

void main()
{
    int n, max1,sum1,min1;
    printf("Enter size : ");
    scanf("%d", &n);
    int a[n][n];
    printf("Elements : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n-----------------rows------------------\n");
    for (int i = 0; i < n; i++)
    {
        sum1=0,max1=0,min1=999;
        for (int j = 0; j < n; j++)
        {
            sum1 += a[i][j];
            if(max1<a[i][j])
            {
                max1=a[i][j];
            }
            if(min1>a[i][j])
            {
                min1=a[i][j];
            }
        }
        printf("\nSum of %d row : %d",i+1,sum1 );
        printf("\nmax in %d row : %d",i+1,max1);
        printf("\nmin in %d row : %d\n",i+1,min1);
    }
    printf("\n---------------columns----------------\n");
    int sum2,max2,min2;
    for(int i=0;i<n;i++){
        sum2=0,max2=0,min2=999;
        for(int j=0;j<n;j++){
            sum2+=a[j][i];
            if(max2<a[j][i]){
                max2=a[j][i];
            }
            if(min2>a[j][i]){
                min2=a[j][i];
            }
        }
        printf("\nSum of %d col : %d",i+1,sum2);
        printf("\nmax in %d col : %d",i+1,max2);
        printf("\nmin in %d col : %d\n",i+1,min2);
    }
}