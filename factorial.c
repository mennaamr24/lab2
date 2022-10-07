#include <stdio.h>
#include <stdlib.h>
int x;
int fib(int n)
{
    if (n==0)
        return 0;
    if (n==1 || n==2)
            return 1;
    else
        return fib(n-1)+fib(n-2);

}
 int main ()
 {
     x=5;
     int n;
     printf("Enter numbers of terms ");
     scanf("%d",&n);
         printf("%d ,",fib(n));

     return 0;
 }
