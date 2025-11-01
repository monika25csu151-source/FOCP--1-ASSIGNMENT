#include <stdio.h>

int bitwiseAdd(int a, int b) {
    while (b != 0) {
        int carry = a & b;   
        a = a ^ b;           
        b = carry << 1;      
    }
    return a;
}

int bitwiseSubtract(int a, int b) {
    // a - b = a + (~b + 1)
    int negB = bitwiseAdd(~b, 1); 
    return bitwiseAdd(a, negB);
}

int main() {
    int a, b;
    printf("Ent
