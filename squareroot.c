#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter your number");
    scanf("%d",&n);
    if (n>0)
    {
        float x =sqrt(n);
        printf("%f",x);
    }
    else
    {
        printf("you enter a negative number please try again");
    }

    return 0;
}
