// array switch case

#include <stdio.h>

void main()
{
    int n, x, sum = 0, m, p, temp;
    printf("array size=");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements : \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
again:
    printf("\n1> Sum \n2> ascending order \n3> descending order \n4> add element at position \n5> element delete \n6> unique value \n");
    printf("\nselect option : ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
    {
        for (int i = 0; i < n; i++){
            sum += a[i];
        }
        printf(" sum is : %d", sum);
        goto ask;
    }
    case 2:
    {   
        printf("\nAscending order :");
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n-1; j++){
                if (a[j + 1] < a[j]){
                    temp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
        goto ask;
    }
    case 3:
    {
        printf("\ndescending order :");
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n-1; j++){
                if (a[j + 1] > a[j]){
                    temp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
        goto ask;
    }
    case 4:
    {
        printf("\nEnter index no:");
        scanf("%d", &m);
        printf("Enter value:");
        scanf("%d", &p);
        n++;
        for (int i = n - 1; i >= m; i--){
            a[i + 1] = a[i];
        }
        a[m] = p;

        for (int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
        goto ask;
    }
    case 5:
    {
        printf("\nEnter index no to delete :");
        scanf("%d", &m);
        for (int j = m; j < n - 1; j++){
            a[j] = a[j + 1];
        }
        n--;
        for (int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
        goto ask;
    }
    case 6:
    {
        for (int i = 0; i < n; i++){
            temp = 0;
            for (int j = 0; j < n; j++){
                if (a[i] == a[j]){
                    temp++;
                }
            }
            if (temp == 1){
                printf("%d ", a[i]);
            }
        }
        goto ask;
    }
    default:
    {
        goto ask;
    }
        char ans;
    ask:
        printf("\n");
        printf("\nWant to continue program ? y/n : ");
        scanf("%s", &ans);
        if (ans == 'y'){
            goto again;
        }
        else if(ans == 'n'){
            break;
        }
        else{
            goto ask;
        }
    }
}
