#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int a[10][10];  // 2D array to store the matrix

    // Reading matrix elements into the 2D array
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    int isSymmetric = 1;

    if (rows != cols) {
        isSymmetric = 0;
    } else {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (a[i][j] != a[j][i]) {  // comparing a[i][j] with a[j][i] in the 2D array
                    isSymmetric = 0;
                    break;
                }
            }
            if (!isSymmetric) break;
        }
    }

    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}