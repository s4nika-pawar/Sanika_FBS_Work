#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    if (number >= 100 && number <= 999) {
        originalNumber = number; 

      
        reversedNumber = (number % 10) * 100; 
        number /= 10; 
        reversedNumber += (number % 10) * 10; 
        number /= 10; 
        reversedNumber += number % 10; 

        
        if (originalNumber == reversedNumber) {
            printf("%d is a palindrome number.\n", originalNumber);
        } else {
            printf("%d is not a palindrome number.\n", originalNumber);
        }