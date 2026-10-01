#include <stdio.h>

int main() {
    int arr[100], n, x, i, idx;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    idx = -1;

    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            idx = i;
            break;
        }
    }

    printf("%d\n", idx);

    return 0;
}