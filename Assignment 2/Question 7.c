#include <stdio.h> 

int main() {
    int age; 

    
    printf("Enter your age: ");
   
    scanf("%d", &age);

    
    if (age < 0) {
        printf("Invalid age. Age cannot be negative.\n");
    } else if (age < 12) {
        printf("The person is a child.\n");
    } else if (age >= 12 && age <= 19) {
        printf("The person is a teenager.\n");
    } else if (age >= 20 && age <= 59) {
        printf("The person is an adult.\n");
    } else { 
        printf("The person is a senior.\n");
    }

    return 0; 
}