// diagonal sum
#include<stdio.h>

void main(){
    int n,sum1=0,sum2=0,max1=0,min1=999,min2=999,max2=0;
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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1+=a[i][j];
                if(max1<a[i][j]){
                    max1=a[i][j];
                }
                if(min1>a[i][j]){
                    min1=a[i][j];
                }
            }
            if(i+j==(n-1)){
                sum2+=a[i][j];
                if(max2<a[i][j]){
                    max2=a[i][j];
                }
                if(min2>a[i][j]){
                    min2=a[i][j];
                }
            }
        }
    }
    printf("sum of 1st diagonal :\n");
    printf("\nsum : %d\n",sum1);
    printf("max : %d\n",max1);
    printf("min : %d\n",min1);
    printf("\nsum of 2nd diagonal :\n");
    printf("\nsum : %d\n",sum2);
    printf("max : %d\n",max2);
    printf("min : %d\n",min2);
}