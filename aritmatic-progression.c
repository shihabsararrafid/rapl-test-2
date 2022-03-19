#include <stdio.h>
#include <math.h>
int main()
{

    long long int n, i, sum, a, b, moreSum, mul, new, count = 0;
    // long double a, b;
    scanf("%lld", &n);
    // 2n =(a+b)(b-a+1)'
    for (i = 1; i <= sqrt(2 * n); i++)
    {
        mul = 2 * n;
        if (mul % i == 0)
        {
            sum = i;
            // a+b =i
            // b-a-1 =mul/i
            // a+b-2a=mul/i-+1
            // sum -2* a + 1-sum = (mul / i)-i;
            // sum -2* a + 1-sum = moreSum-sum;
            // -2* a + 1 = moreSum-sum;
            // (sum-moreSum+1)/2 =a;
            // b =i-a;
            moreSum = mul / i;

            // a = (sum - moreSum + 1)/2;
            new = (sum - moreSum + 1);
            // b = i - a;
            if (new % 2 == 0)
            {
                count++;
            }
        }
    }
    printf("%lld", count);
    return 0;
}