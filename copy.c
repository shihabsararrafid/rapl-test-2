// identify the genuine movie
#include <stdio.h>
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b)
    {
        printf("%d\n", c);
    }
    else if (c == b)
    {
        printf("%d\n", a);
    }
    else if (a == c)
    {
        printf("%d\n", b);
    }

    return 0;
}