// Min Max Avg
#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],i,n,max,min, sum=0;
    float avg=0;
    printf("How many number you want to enter?\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n", n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    min=a[1];
    max=a[1];
    sum=a[1];
    for(i=2;i<=n;i++){
        if(min>a[i])
            min=a[i];

        if(max<a[i])
            max=a[i];

        sum=sum+a[i];

    }
    avg=(float)sum/n;
    printf("Min=%d Max=%d Avg=%.2f", min, max, avg);
    return 0;
}


