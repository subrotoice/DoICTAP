#include<stdio.h>

int main()
{
    int a[20], n, c, i, target;

    printf("How many number do you want to enter\n");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n);
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }

    printf("Enter targed number\n");
    scanf("%d", &target);

    for(i=1;i<=n;i++){
        if(a[i]==target){
            printf("%d is at position %d", target, i);
            break;
        }
    }

    if(i==n+1){
        printf("%d is at position %d", target, a[i]);
    }

    return 0;
}
