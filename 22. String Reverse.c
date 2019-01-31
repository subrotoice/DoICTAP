// String Reverse
#include<stdio.h>

int main()
{
    int i=0, n, l=0;
    char line[80], copyLine[80];

    printf("Enter a String\n");
    scanf("%[^\n]s", line);
    while(line[l]!='\0'){
        l=l+1;
    }
    l=l-1;
    while(l>=0){
        // printf("i=%d l=%d\n", i, l);
        copyLine[i]=line[l];
        i++;
        l--;

    }
    printf("%s", copyLine);

    return 0;
}
