#include <stdio.h>
int main()
{
    int result;
    // int l = 4, s = 2;
    long long int gcd(long long int l, long long int s)
    {
        int res;
        if (s == 0)
        {
            res = l;
        }
        else if (s != 0)
        {
            long long int rem = l % s;
            l = s;
            s = rem;
            return gcd(l, s);
        }
        return res;
    }
    // result = gcd(366, 60);
    printf("%lld", gcd(978, 959735253748949470));
    return 0;
}