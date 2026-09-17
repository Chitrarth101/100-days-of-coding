#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int arr[100][100];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    int sum = 0;
    for (int i = 0; i < rows; i++)
        sum += arr[i][i];

    printf("%d\n", sum);

    return 0;
}