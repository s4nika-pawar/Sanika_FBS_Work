#include <stdio.h>

int main() {
    int n = 5; // Number of rows for the half pyramid
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= n; ++i) {
        // Inner loop for printing numbers in each row
        for (j = 1; j <= i; ++j) {
            printf("%d ", j); // Print the current number and a space
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}