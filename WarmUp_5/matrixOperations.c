#include <stdio.h>

void addMatrices(int a[][2], int b[][2], int sum[][2], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int a[][2], int b[][2], int product[][2], int rowsA, int columnsA, int columnsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsB; j++) {
            product[i][j] = 0;
            for (int k = 0; k < columnsA; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][2], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[][2] = {{1, 2}, {3, 4}};
    int matrix2[][2] = {{5, 6}, {7, 8}};
    int rows = 2;
    int columns = 2;

    int sum[rows][columns];
    addMatrices(matrix1, matrix2, sum, rows, columns);

    int product[rows][columns];
    multiplyMatrices(matrix1, matrix2, product, rows, columns, columns);

    printf("Matrix Addition:\n");
    printMatrix(sum, rows, columns);
    printf("Matrix Multiplication:\n");
    printMatrix(product, rows, columns);

    return 0;
}