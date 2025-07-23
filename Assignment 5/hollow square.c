#include <stdio.h>

int main() {
    int n = 4; // Size of the square
    int i, j;

    for (i = 0; i < n; i++) { // Outer loop for rows
        for (j = 0; j < n; j++) { // Inner loop for columns
            // Condition to print '*' for boundaries and ' ' for the interior
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}