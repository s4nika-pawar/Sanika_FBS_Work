#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2d\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2d\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2d\n", result);
    } else if (operator == '/') {
        if (num2 != 0) { 
            result = num1 / num2;
            printf("Result: %.2d\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else if (operator == '%') {
        
        if ((int)num2 != 0) { 
            result = (int)num1 % (int)num2; 
            printf("Result: %.2d\n", result);
        } else {
            printf("Error: Modulus by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}