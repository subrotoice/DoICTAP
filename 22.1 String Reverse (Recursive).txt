// String Reverse (Recursive)
#include <stdio.h>
void revString();

int main()
{
    printf("Enter a sentence: ");
    revString();

    return 0;
}

void revString()
{
    char c;
    scanf("%c", &c);

    if( c != '\n')
    {
        revString();
        printf("%c",c);
    }
}
