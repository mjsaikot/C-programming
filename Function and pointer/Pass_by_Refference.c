#include <stdio.h>

void increment(int* num) {
    (*num)++;
    printf("Inside function: %d\n", *num);
}

int main() {
    int num = 5;
    printf("Before function call: %d\n", num);
    increment(&num);
    printf("After function call: %d\n", num);
    return 0;
}
