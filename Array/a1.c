#include<stdio.h>

void main(){
    int i,n,sum=0,min=999,max=0,temp;
    printf("array size=");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : \n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray is :");
    for(i=0;i<n;i++)
    {
        
        printf("\na[%d]=%d",i,a[i]);
        sum+=a[i];
        if(max<a[i]){
            max=a[i];
        } 
        if(a[i]<min){
            min=a[i];
        }
    }  

    
    printf("\nsum is : %d",sum);
    printf("\nmax is : %d",max);
    printf("\nmin is : %d",min);
}


/*for (int j = 0; j < n-1; j++){
                if (a[j + 1] > a[j]){
                    temp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = temp;
                }
            }
for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }*/