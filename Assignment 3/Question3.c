#include <stdio.h>

int main() {
    int sum = 0; 
    int i;       

    // Loop from 1 to 5
    for (i = 1; i <= 5; i++) {
        sum += i; 
    }

    
    printf("The sum of numbers from 1 to 5 is: %d\n", sum);

    return 0;
}