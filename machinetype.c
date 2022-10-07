#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int x=0x11223344;
    char *ptr= (char*)&x;
    if (*ptr==0x44)
    {
        printf("this is little endian");
    }
    else if (*ptr == 0x11)
    {
        printf("this is big endian");
    }
    return 0;
}
