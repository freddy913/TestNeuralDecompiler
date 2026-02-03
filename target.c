#include <stdio.h>


int multiply_numbers(int a, int b) {
    printf("Multiply some Numbers\n");
    return a * b;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return multiply_numbers(n, factorial(n-1));
}



int main() {
   
    int fact = factorial(5);
    int prod = multiply_numbers(5, 10);

    printf("factorial: %d, product: %d\n",fact, prod);
    
    return 0;
}
