#include <stdio.h>

int main() {
    int m, n;
    int arr[100][100];
    int i, j;
    int sum;

    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Row-wise sum
    printf("\nRow-wise sums:\n");

    for (i = 0; i < m; i++) {
        sum = 0;

        for (j = 0; j < n; j++) {
            sum = sum + arr[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    // Column-wise sum
    printf("\nColumn-wise sums:\n");

    for (j = 0; j < n; j++) {
        sum = 0;

        for (i = 0; i < m; i++) {
            sum = sum + arr[i][j];
        }

        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}