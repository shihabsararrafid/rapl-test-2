// anti problems

#include <stdio.h>
int main()
{
    long int a, b, c, d, i, e, count;
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    count = 0;
    if (a < b)
    {
        i = a;
        e = b;
    }
    else if (a > b)
    {
        i = b;
        e = a;
    }

    while (i <= e)
    {
        // printf("%d\n", i);
        if (i % c != 0 && i % d != 0)
        {
            // printf("%d\n", i);
            count++;
        }
        i++;
    }
    printf("%ld\n", count);

    return 0;
}