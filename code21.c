#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int arr[100][100];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    int distinct = 1; // assume True initially

    // Compare every pair of diagonal elements
    for (int i = 0; i < rows && i < cols; i++) {
        for (int j = i + 1; j < rows && j < cols; j++) {
            if (arr[i][i] == arr[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}