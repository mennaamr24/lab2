#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter your number");
    scanf("%d",&n);
    int *ptr=( int*) malloc(n*sizeof(int));
    if (ptr== NULL)
    {
        printf("No dynamic memory alloc\n");
    }
    else
    {
        printf("enter your numbers\n");
        for (int i=0 ;i<n;i++)
        {
            scanf("%d",&ptr[i]);
            printf("\n");
        }
        int max=ptr[0];
        int min=ptr[0];
        for (int i=0;i<n;i++)
        {
            if (ptr[i]>max)
                max=ptr[i];
            if (ptr[i]<min)
                min=ptr[i];
        }
        printf("max number= %d \n",max);
        printf("min number= %d",min);
    }
    return 0;
}
