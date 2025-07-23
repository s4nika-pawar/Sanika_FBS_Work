#include <stdio.h>

int main() {
    int n = 5; // Size of the square
    int i, j;

    printf("Hollow Square with Diagonal Pattern (n=%d):\n", n);

    for (i = 1; i <= n; i++) { // Outer loop for rows
        for (j = 1; j <= n; j++) { // Inner loop for columns
            // Condition to print '*' for borders and diagonals
            if (i == 1 || i == n || // First or last row
                j == 1 || j == n || // First or last column
                i == j ||           // Main diagonal (top-left to bottom-right)
                j == (n - i + 1)) { // Anti-diagonal (top-right to bottom-left)
                printf("* ");
            } else {
                printf("  "); // Print two spaces for alignment
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}