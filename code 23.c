#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    
    int result[n * m];
    int idx = 0;
    
    // There are (n + m - 1) diagonals in total
    for (int d = 0; d < n + m - 1; d++) {
        int temp[n < m ? n : m]; // max possible length of a diagonal
        int count = 0;
        
        // Find starting cell of this diagonal
        int row = (d < m) ? 0 : d - m + 1;
        int col = (d < m) ? d : m - 1;
        
        // Traverse diagonal (moving down-left: row++, col--)
        while (row < n && col >= 0) {
            temp[count++] = arr[row][col];
            row++;
            col--;
        }
        
        // Reverse odd-indexed diagonals to match zigzag pattern
        if (d % 2 != 0) {
            for (int i = 0; i < count; i++)
                result[idx++] = temp[i];
        } else {
            for (int i = count - 1; i >= 0; i--)
                result[idx++] = temp[i];
        }
    }
    
    for (int i = 0; i < idx; i++) {
        printf("%d", result[i]);
        if (i != idx - 1) printf(" ");
    }
    printf("\n");
    
    return 0;
}