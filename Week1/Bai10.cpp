/*
Bài tập 10
Viết chương trình nhập vào 2 ma trận vuông cùng kích thước n*n, trong đó n nhập từ bàn phím. Sau đó tính tổng và tích của hai ma trận đó và đưa kết quả ra màn hình.
Yêu cầu sử dụng cấp phát động để cấp phát bộ nhớ cho các ma trận.
 */

#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a square matrix of size n
int** allocateMatrix(int n) {
    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
    }
    return matrix;
}

// Function to free memory allocated for a square matrix of size n
void deallocateMatrix(int** matrix, int n) {
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to input values into a square matrix of size n
void inputMatrix(int** matrix, int n) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a square matrix of size n
void printMatrix(int** matrix, int n) {
    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two square matrices of size n
void addMatrices(int** matrix1, int** matrix2, int** result, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to multiply two square matrices of size n
void multiplyMatrices(int** matrix1, int** matrix2, int** result, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
// Sok Sokong 20211005
int main() {
    int n;
    printf("Enter the size of the square matrices: ");
    scanf("%d", &n);

    int** matrix1 = allocateMatrix(n);
    int** matrix2 = allocateMatrix(n);
    int** sumMatrix = allocateMatrix(n);
    int** productMatrix = allocateMatrix(n);

    inputMatrix(matrix1, n);
    inputMatrix(matrix2, n);

    addMatrices(matrix1, matrix2, sumMatrix, n);
    multiplyMatrices(matrix1, matrix2, productMatrix, n);

    printf("Matrix Addition:\n");
    printMatrix(sumMatrix, n);

    printf("Matrix Multiplication:\n");
    printMatrix(productMatrix, n);

    deallocateMatrix(matrix1, n);
    deallocateMatrix(matrix2, n);
    deallocateMatrix(sumMatrix, n);
    deallocateMatrix(productMatrix, n);

    return 0;
}