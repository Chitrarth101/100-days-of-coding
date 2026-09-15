#include <stdio.h>

int main() {
    int rows, cols;
    
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows * cols];
    int transpose[rows * cols];
    
    // Input matrix elements (stored as 1D)
    for (int i = 0; i < rows * cols; i++) {
        scanf("%d", &matrix[i]);
    }
    
    // Calculate transpose
    // matrix[i][j] -> matrix[i*cols + j]
    // transpose[j][i] -> transpose[j*rows + i]
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j * rows + i] = matrix[i * cols + j];
        }
    }
    
    // Print transpose (cols x rows)
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i * rows + j]);
        }
        printf("\n");
    }
    
    return 0;
}