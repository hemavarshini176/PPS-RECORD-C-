/*
Aim:
    To perform addition, subtraction and multiplication of two matrices.

Algorithm:
    1. Read n.
    2. Read matrix A.
    3. Read matrix B.
    4. Add: C = A + B
    5. Sub: D = A - B
    6. Multiply: E = A * B
    7. Print all matrices.

Sample Output:
    A = [[1,2],[3,4]]
    B = [[5,6],[7,8]]
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    int A[10][10], B[10][10], C[10][10], D[10][10], M[10][10];

    printf("Enter A:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter B:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
            D[i][j] = A[i][j] - B[i][j];
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            M[i][j] = 0;
            for (int k = 0; k < n; k++)
                M[i][j] += A[i][k] * B[k][j];
        }

    return 0;
}
