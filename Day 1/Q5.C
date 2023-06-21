#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= 1;         // Set the 1st bit
            break;
        case 2:
            num &= ~(1 << 31); // Clear the 31st bit
            break;
        case 3:
            num ^= (1 << 15); // Toggle the 16th bit
            break;
        default:
            printf("Invalid operation type\n");
            break;
    }
    return num;
}

int main() {
    int num, oper_type;
    int result;

    // Read input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    // Perform the bit operation
    result = bit_operations(num, oper_type);

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}
