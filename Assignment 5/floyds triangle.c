#include <stdio.h>

int main() {
    int n = 4; // Number of rows
    int i, j;
    int number = 1; // Starting number for the triangle

    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Inner loop for printing numbers in each row
        for (j = 1; j <= i; j++) {
            printf("%d ", number); // Print the current number
            number++; // Increment the number for the next iteration
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}