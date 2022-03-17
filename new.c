#include <stdio.h>
int main()
{
    int result;
    // int l = 4, s = 2;
    int gcd(int l, int s)
    {
        int res;
        if (s == 0)
        {
            res = l;
        }
        else if (s != 0)
        {
            int rem = l % s;
            l = s;
            s = rem;
            return gcd(l, s);
        }
        return res;
    }
    // result = gcd(8, 6);
    printf("%d", gcd(5, 2));
    return 0;
}