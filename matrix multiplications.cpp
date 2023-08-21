#include <stdio.h>

#define N 3

void multiplyMatrix(int A[][N], int B[][N], int C[][N]) {
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            C[i][j] = 0;
            for (k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[N][N];

    printf("Matrix A:\n");
    displayMatrix(A);

    printf("\nMatrix B:\n");
    displayMatrix(B);

    multiplyMatrix(A, B, C);

    printf("\nMatrix A * B:\n");
    displayMatrix(C);

    return 0;
}
