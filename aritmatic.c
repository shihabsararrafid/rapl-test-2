#include <stdio.h>
int main()
{
    long long int N, mid, first, count;
    long double newF;
    scanf("%lld", &N);
    count = 0;
    mid = N / 2;
    // first = ();
    for (long long int i = 1; i <= N; i++)
    {
        newF = ((N / i) - ((i - 1) / 2));
        first = ((N / i) - ((i - 1) / 2));
        if (first == newF)
        {
            count++;
        }
        // printf("%lld\n", first);
    }

    // long long int prog(mid)
    // {
    //     long long int sum = mid + mid - 1;
    //     if (sum < N)
    //     {
    //         sum = mid + mid - 1 + mid - 2;
    //     }
    // }
    printf("%lld", count);
}