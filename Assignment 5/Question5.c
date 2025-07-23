#include <stdio.h>

int main() {
    int n = 5; 
    int i, j, k;

   
    for (i = n; i >= 1; i--) {
        
        for (j = 0; j < (n - i); j++) {
            printf(" ");
        }

        
        for (k = 0; k < (2 * i - 1); k++) {
            printf("*");
        }

        
        printf("\n");
    }

    return 0;
}