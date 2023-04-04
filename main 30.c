#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if (n>=0)
    {
        printf("Positive Number");
    }
    else
    {
        printf("Negative Number");
    }
    return 0;
}
