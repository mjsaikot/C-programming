#include <stdio.h>

void increment(int num) {
    num = num + 1;
    printf("Inside function: %d\n", num);
}

int main() {
    int num = 5;
    printf("Before function call: %d\n", num);
    increment(num);
    printf("After function call: %d\n", num);
    return 0;
}
