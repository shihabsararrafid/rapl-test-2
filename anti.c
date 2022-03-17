// anti problems

#include <stdio.h>
int main()
{
    unsigned long int a, b, c, d, i, e, l, s, res;
    signed long int count1, count2, count3, count4, count5, rem, uni1, lcm, uni2, com1, com2, tot1, tot2;

    scanf("%lu %lu %lu %lu", &a, &b, &c, &d);

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
    if (c > d)
    {
        l = c;
        s = d;
    }
    else if (c < d)
    {
        l = d;
        s = c;
    }
    int result;
    // int l = 4, s = 2;
    unsigned long int gcd(unsigned long int l, unsigned long int s)
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
    lcm = (c * d) / gcd(s, l);
    // result = gcd(8, 6);
    count1 = e / c;
    count2 = e / d;
    count3 = (i - 1) / c;
    count4 = (i - 1) / d;

    com1 = 0;
    com2 = 0;
    com1 = e / lcm;
    com2 = (i - 1) / lcm;
    tot1 = count1 + count2 - com1;
    tot2 = count3 + count4 - com2;
    count5 = (e - i) + 1;

    res = count5 - (tot1 - tot2);

    printf("%lu\n", res);

    return 0;
}