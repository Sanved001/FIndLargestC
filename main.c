#include <stdio.h>

int findLargest(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2, largest;
    int result;
    
    printf("Enter first number: ");
    result = scanf("%d", &num1);
    if (result != 1) {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    
    printf("Enter second number: ");
    result = scanf("%d", &num2);
    if (result != 1) {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    
    if (num1 == num2) {
        printf("\nBoth numbers are equal: %d\n", num1);
    } else {
        largest = findLargest(num1, num2);
        printf("\nThe largest of %d and %d is: %d\n", num1, num2, largest);
    }
    
    return 0;
}

/*https://github.com/Sanved001/FIndLargestC/*/
