#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int n;
    int b;
    printf("Enter your number ");
    scanf("%d",&n);
    for (int i=0 ;i<8 ;i++)
    {
        b=((n & (1<<i))>>i);
        printf("%d",b);
    }
    return 0;
}
