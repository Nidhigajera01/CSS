#include <stdio.h>

int min(int a[], int b)
{
    int min = 999;
    for (int i = 0; i < b; i++){
        if (min > a[i]){
            min = a[i];
        }
    }
    return min;
}

int max(int a[], int b)
{
    int max = 0;
    for (int i = 0; i < b; i++){
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

void dulplicate_remove(int a[], int b)
{
    for (int i = 0; i < b; i++){
        int temp = 0;
        for (int j = 0; j < b; j++){
            if (a[i] == a[j]){
                temp++;
            }
        }
        if (temp == 1){
            printf("%d ", a[i]);
        }
    }
}

void main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    printf("Enter elements :");
    int A[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    printf("min : %d", min(A, n));
    printf("\nmax : %d", max(A, n));
    printf("\nArray after duplicate remove : ");
    dulplicate_remove(A, n);
    printf("2nd min");
}