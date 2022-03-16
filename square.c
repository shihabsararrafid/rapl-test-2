// finding the nearest square number of n
#include <stdio.h>
#include <math.h>
int main()
{

    long int n, a, s, i;
    float b;
    // s = 1;
    scanf("%li", &n);
    s = sqrt(n);

    // for (i = 1; i <= n; i++)
    //  {
    //      b = sqrt(i);
    //      a = sqrt(i);
    //      if (a == b)
    //      {
    //          s = a;
    //      }
    //  }
    printf("%d ", s * s);

    return 0;
}