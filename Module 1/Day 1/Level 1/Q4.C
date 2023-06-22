// Write a simple calculator program which should accept inputs in the same order.

#include <stdio.h>

int main() {
    float operand1, operand2;
    char op;
    float result;

    // Read input from the user
    printf("Enter Operand 1: ");
    scanf("%f", &operand1);

    printf("Enter Operator: ");
    scanf(" %c", &op);

    printf("Enter Operand 2: ");
    scanf("%f", &operand2);

    // Perform the calculation based on the operator
    switch (op) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            // Check if the second operand is zero to avoid division by zero
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero\n");
                return 1;  // Exit the program with an error status
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;  // Exit the program with an error status
    }

    // Print the result
    printf("Result: %.2f\n", result);

    return 0;
}
