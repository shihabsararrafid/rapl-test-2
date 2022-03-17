#include <stdio.h>
int main()
{
    unsigned long int a, b, c, d, s, e, i, diff, count = 0;
    scanf("%lu %lu %lu %lu", &a, &b, &c, &d);
    if (a >= b)
    {
        s = b;
        e = a;
    }
    else if (a < b)
    {
        s = a;
        e = b;
    }
    diff = e - s + 1;
    for (i = s; i <= e; i++)
    {
        if (i % c == 0 || i % d == 0)
        {
            count++;
        }
    }
    printf("%lu", diff - count);
    return 0;
}