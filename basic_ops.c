#include <stdio.h>


int add_numbers(int a, int b) {
    return a + b;
}

int multiply_numbers(int a, int b) {
    printf("Multiply some Numbers\n");
    return a * b;
}

int is_even(int number) {
    if (number % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {  
    int sum = add_numbers(5, 10);
    int prod = multiply_numbers(5, 10);
    int even = is_even(prod);

    printf("Sum: %d, Product: %d, Is Even: %d\n", sum, prod, even);
    
    return 0;
}
