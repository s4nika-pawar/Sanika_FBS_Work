#include <stdio.h>

int main() {
    int num;

   
   
    printf("Enter an integer: ");
   
   
    scanf("%d", &num);

    
    
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } 
    
    
    else if (num % 3 == 0) {
        printf("%d is divisible by 3 but not by 5.\n", num);
    } 
    
    
    else if (num % 5 == 0) {
        printf("%d is divisible by 5 but not by 3.\n", num);
    } 
    
    
    else {
        printf("%d is neither divisible by 3 nor by 5.\n", num);
    }

    return 0;
}