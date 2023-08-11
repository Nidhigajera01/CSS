// all duplicate remove

#include <stdio.h>
void main()
{
    int n,k=0,temp;
    printf("Enter size of array:");
    scanf("%d", &n);
    int a[n];
    printf("Elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        temp=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                temp++;
            }    
        }
        if(temp==1){
            printf("\n%d",a[i]);
        }
    }
}