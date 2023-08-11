// matrix sum min max

#include<stdio.h>
void main()
{
    int a[100][100],i,j,n,sum=0;
    printf("Enter size :");
    scanf("%d",&n);
    printf("elements : \n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    int temp,max=a[0][0],min=9999;
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
            sum+=a[i][j];
            if(max<a[i][j]){
                max=a[i][j];
            }
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
        printf("\n");
    }
    printf("\nsum : %d",sum);
    printf("\nmax value : %d",max);
    printf("\nmin value : %d",min);
}
