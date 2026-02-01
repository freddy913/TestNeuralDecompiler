#include <stdio.h>

int get_string_length(char *str) {
    asm(""); 
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int count_set_bits(int n) {
    asm("");
    int count = 0;
    while (n > 0) {
        if ((n & 1) == 1) {
            count++;
        }
        n = n >> 1; 
    }
    return count;
}

int count_vowels(char *str) {
    asm("");
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    char t_str[] = "Hello Neural Decompiler";
    volatile int t_num = 29;

    char buffer[50];
    int i = 0;
    while(t_str[i]) { buffer[i] = t_str[i]; i++; }
    buffer[i] = '\0';

    int len = get_string_length(buffer);
    int bits = count_set_bits(t_num);
    int vowels = count_vowels(buffer);

    printf("Length: %d, Bits: %d, Vowels: %d\n", len, bits, vowels);

    return 0;
}