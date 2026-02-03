#include <stdio.h>

void print_hello() {
    printf("Hello World from Neural Decompiler Test!\n");
}

int add_numbers(int a, int b) {
    return a + b;
}

int multiply_numbers(int a, int b) {
    printf("Multiply some Numbers\n");
    return a * b;
}

int is_even(int number) {
    if (number % 2 == 0) {
        return 1; // Wahr
    } else {
        return 0; // Falsch
    }
}

int main() {
    print_hello();
    
    int sum = add_numbers(5, 10);
    int prod = multiply_numbers(5, 10);
    int even = is_even(prod);

    printf("Summe: %d, Produkt: %d, Gerade: %d\n", sum, prod, even);
    
    return 0;
}
