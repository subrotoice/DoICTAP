// Middle among three
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three nubers");
    scanf("%d %d %d",&a, &b, &c); // 8 7 5

    if(a>b){
        if(a>c){ // here a can not be middle
            if(b>c){
                printf("b");
            } else {
                printf("c");
            }
        }
    } else {
        if(b>c){
            if(a>c){
                printf("a");
            } else {
                printf("c");
            }
        }
    }
    return 0;
}
