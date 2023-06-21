//Write a program to print exponent part of double variable in hexadecimal and binary format.
#include <stdio.h>
#include <stdint.h>

void get_exponent_parts(double num, uint16_t *exponent_hex, uint16_t *exponent_binary) {
   
    uint64_t *bits = (uint64_t *)&num;
    
   
    uint16_t exponent_bits = (*bits >> 52) & 0x7FF;
    
    
    *exponent_hex = exponent_bits;
    *exponent_binary = exponent_bits;
}

int main() {
    double x = 0.7;
    uint16_t exponent_hex, exponent_binary;
    
    get_exponent_parts(x, &exponent_hex, &exponent_binary);
    
    printf("Exponent (Hex): 0x%X\n", exponent_hex);
    printf("Exponent (Binary): 0b%011X\n", exponent_binary);
    
    return 0;
}
