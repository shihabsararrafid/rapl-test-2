#include <stdio.h>
#include <math.h>
// 2*N = i*{2*a+(i-1)}

// 2*a =
int main()
{
    long long int count = 0, N, i, mul, count2 = 0, res = 0, ex;
    scanf("%lld", &N);
    for (i = 1; i <= sqrt(N); i++)
    {
        mul = 2 * N;
        if (mul % i == 0)
        {
            ex = ((mul / i) - (i - 1));
            if (ex % 2 == 0)
            {
                count++;
            }
        }
    }
    printf("%lld\n", count * 2);

    return 0;
}