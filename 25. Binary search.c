#include<stdio.h>

int main()
{
    int a[20], n, i, first, last, middle, target;

    printf("How many number do you want to enter\n");
    scanf("%d", &n);
    printf("Enter %d Sorted numbers\n", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Enter targed number\n");
    scanf("%d", &target);

    first=0;
    last=n-1;
    middle=(first+last)/2;

    while(first<=last){
        if(a[middle]<target){
            first=middle+1;
        }
        else if(a[middle]==target){
            printf("%d is at position %d", target, middle+1);
            break;
        }
        else{
            last=middle-1;
        }
        middle=(first+last)/2;
    }

    if(first>last){
        printf("%d is not present", target);
    }

    return 0;
}
