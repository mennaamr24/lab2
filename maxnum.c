#include <stdio.h>
#include <stdlib.h>
  int max( int a ,int b ,int c ,int d)
  {
      int max=a;
      if (max<b)
        return b;
      else if (max <c)
        return c;
        else if (max<d)
            return d;
            else
                return a;
  }
    int main ()
    {
        printf("%d",max(30,5,50,2));
    }
