#include <stdio.h>

int main() {
    int n, i, element;
    int arr[100];
    int count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    printf("\n");

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("Element found at position %d\n", i + 1);
            count++;
        }
    }

    if (count == 0) {
        printf("Element not found in the array.\n");
    } else {
        printf("Total number of occurrences = %d\n", count);
    }

    return 0;
}