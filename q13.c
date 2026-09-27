#include <stdio.h>

int main() {
    int n, i, j;
    int a[100][100], transpose[100][100];
    int symmetric = 1;
    int skewSymmetric = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[i][j] = a[j][i];
        }
    }

    // Check symmetric and skew-symmetric
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            if (a[i][j] != transpose[i][j]) {
                symmetric = 0;
            }

            if (a[i][j] != -transpose[i][j]) {
                skewSymmetric = 0;
            }
        }
    }

    printf("\nOriginal Matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of Matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    if (symmetric) {
        printf("\nThe matrix is Symmetric.\n");
    }
    else if (skewSymmetric) {
        printf("\nThe matrix is Skew-Symmetric.\n");
    }
    else {
        printf("\nThe matrix is neither Symmetric nor Skew-Symmetric.\n");
    }

    return 0;
}