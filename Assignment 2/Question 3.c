#include <stdio.h> 

int main() {
    int num1, num2, num3; 

    
    printf("Enter three integers: ");
    
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check if num1 is the greatest
    if (num1 >= num2 && num1 >= num3) {
        printf("The greatest number is: %d\n", num1);
    } 
    
    else if (num2 >= num1 && num2 >= num3) {
        printf("The greatest number is: %d\n", num2);
    } 
    
    else {
        printf("The greatest number is: %d\n", num3);
    }

    return 0; 
}