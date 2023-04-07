#include <stdio.h>

int main() {
    int A, B;
    float C;
    char D;
    
    printf("Enter an integer: ");
    scanf("%d", &A);
    
    printf("Enter a very big integer: ");
    scanf("%d", &B);
    
    printf("Enter a floating value: ");
    scanf("%f", &C);
    
    printf("Enter a character: ");
    scanf(" %c", &D);
    
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%f\n", C);
    printf("%c\n", D);
    
    return 0;
}
