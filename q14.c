#include <stdio.h>

int main() {
    int n, i, j;
    int a[100][100];
    int mainDiagonal = 0, secondaryDiagonal = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate diagonal sums
    for (i = 0; i < n; i++) {
        mainDiagonal = mainDiagonal + a[i][i];
        secondaryDiagonal = secondaryDiagonal + a[i][n - 1 - i];
    }

    printf("\nMain diagonal sum = %d", mainDiagonal);
    printf("\nSecondary diagonal sum = %d", secondaryDiagonal);

    return 0;
}