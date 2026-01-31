#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int find_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    int my_numbers[] = {3, 7, 1, 9, 4};
    
    int fact = factorial(5);
    int max_val = find_max(my_numbers, 5);
    float temp = celsius_to_fahrenheit(25.0);

    printf("Fakultät: %d, Max: %d, Temp: %.2f\n", fact, max_val, temp);

    return 0;
}