#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    asm("");
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int fibonacci(int n) {
    asm("");
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    int a = 0;
    int b = 1;
    int temp;
    
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int has_duplicates(int arr[], int size) {
    asm("");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    volatile int v_n = 7;
    volatile int v_fib_n = 10;
    
    int numbers[6];
    volatile int raw_nums[] = {10, 20, 30, 20, 50, 60};
    for(int k=0; k<6; k++) numbers[k] = raw_nums[k];

    int prime_check = is_prime(v_n);
    int fib_val = fibonacci(v_fib_n);
    int dupe_check = has_duplicates(numbers, 6);

    printf("Is Prime(7): %d, Fib(10): %d, Has Dupes: %d\n", prime_check, fib_val, dupe_check);

    return 0;
}