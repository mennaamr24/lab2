#include <stdio.h>
#include <stdlib.h>
int max_element ( int arr [], int size)
{
    int max=arr[0];
    for ( int i=0 ; i<size;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[]={1,2,5,4};
    printf("%d",max_element(arr,4));
    return 0;
}
