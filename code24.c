#include <stdio.h>

int main() {
    int n1, m1, n2, m2;
    
    scanf("%d %d", &n1, &m1);
    int a[n1][m1];
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < m1; j++)
            scanf("%d", &a[i][j]);
    
    scanf("%d %d", &n2, &m2);
    int b[n2][m2];
    for (int i = 0; i < n2; i++)
        for (int j = 0; j < m2; j++)
            scanf("%d", &b[i][j]);
    
    // m1 must equal n2 for valid multiplication
    int result[n1][m2];
    
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            printf("%d", result[i][j]);
            if (j != m2 - 1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}