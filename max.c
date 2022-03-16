// finding max sum
#include <stdio.h>
int main()
{

    long int a, b, c, d, sum;
    sum = 0;

    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    if (a == d)
    {
        sum = sum + 1 * a;
    }
    else if (a > d)
    {
        sum = sum + 1 * d;
    }
    else if (a < d)
    {
        sum = sum + 1 * a;
        if (d - a == b)
        {
            sum = sum + 0 * b;
        }
        else if (d - a > b)
        {
            // printf("%d", sum);
            sum = 1 * a + 0 * b - (d - (a + b));
        }
    }
    printf("%d\n", sum);

    return 0;
}