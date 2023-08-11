
#include<stdio.h>

void add_ele(int a[],int b){
    int m,p;
    printf("Enter index no:");
    scanf("%d", &m);
    printf("Enter value:");
    scanf("%d", &p);
    b++;
    for (int i = b; i >= m; i--){
        a[i + 1] = a[i];
    }
    a[m] = p;
    for (int i = 0; i < b; i++){
        printf("%d ", a[i]);
    }
}

void del_ele(int a[],int h){
    int m;
    for(int i=0; i<=h; i++){
        printf("%d ",a[i]);
    }
    printf("\n-------------------");
    printf("\nEnter index no to delete :");
    scanf("%d", &m);
    for (int j = m; j <= h; j++){
        a[j] = a[j + 1];
    }
    h--;
    for (int i = 0; i <= h; i++){
        printf("%d ", a[i]);
    }
}

void replce(int a[],int b){
    int x,y;
    printf("\nEnter index no to replace :");
    scanf("%d",&x);
    printf("Enter value :");
    scanf("%d",&y);
    a[x]=y;
    for(int i=0; i<b; i++){
        printf("%d ",a[i]);
    }
}

void main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int A[n];
    printf("Enter ele :");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    
    add_ele(A,n);
    del_ele(A,n);
    replce(A,n);
}