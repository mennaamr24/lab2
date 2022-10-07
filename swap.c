#include <stdio.h>
#include <stdlib.h>
void swap ( int *var1 , int *var2)
{
    int temp= *var1;
    *var1=*var2;
    *var2=temp;
}
int main()
{
    int x,y;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number :");
    scanf("%d",&y);
    int *ptr1=&x;
    int *ptr2=&y;
    swap(ptr1,ptr2);
    printf("%d %d",x,y);

}
