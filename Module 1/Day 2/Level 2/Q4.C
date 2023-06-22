#include <stdio.h>


int operation(int num, int oper,int pos) {
    int res;
    switch (oper) {
        case 1: res = num | (0x3 << pos);
            break;
        case 2: res = num & ~(0x7 << pos);
            break;
        case 3: res = num ^ (1 << 31);
            break;
        default: printf("Invalid operation type.\n");
            break;
    }
    return res;
}


int main() {
    int num=5, oper=2;
    int pos; 
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    printf("Enter the bit position: ");
    scanf("%d", &pos);
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper);
    int result = operation(num, oper, pos);
    printf("Result: %d\n", result);
    return 0;
}