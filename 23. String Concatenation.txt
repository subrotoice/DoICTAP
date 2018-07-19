// String Concatenation
#include<stdio.h>

int main()
{
    int i=0, n, al=0, bl=0;
    char a[80], b[80], ab[160];

    printf("Enter Two Strings\n");
    scanf("%s %s", a, b);
    while(a[al]!='\0'){
        al=al+1;
    }


    //la=la-1;
    while(b[i]!='\0'){
        a[al]=b[i];
        al++;
        i++;

    }
    a[al]='\0';
    printf("\n%s", a);

    return 0;
}
