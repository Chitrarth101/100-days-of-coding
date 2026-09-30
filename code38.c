#include <stdio.h>

int main()
{
    int a[100], n, t, i, l, h, m;
    int f = -1, e = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter target: ");
    scanf("%d", &t);

    /* first occurrence */
    l = 0;
    h = n - 1;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (a[m] == t)
        {
            f = m;
            h = m - 1;
        }
        else if (a[m] < t)
        {
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }

    /* last occurrence */
    l = 0;
    h = n - 1;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (a[m] == t)
        {
            e = m;
            l = m + 1;
        }
        else if (a[m] < t)
        {
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }

    printf("%d,%d", f, e);

    return 0;
}