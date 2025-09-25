// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[100][100], rowSum[100];
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    return 0;
}

