#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long total = n * (n + 1) / 2;
    long long x = (long long) sqrt((double) total);

    /* guard against floating-point rounding */
    while (x * x > total) x--;
    while ((x + 1) * (x + 1) <= total) x++;

    if (x * x == total)
        printf("%lld\n", x);
    else
        printf("-1\n");

    return 0;
}