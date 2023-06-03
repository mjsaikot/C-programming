#include <stdio.h>

#define MAX_SIZE 100000
/*Given 2 numbers N,M and an array A of N numbers. For every number from 1 to M, 
print how many times this number appears in this array.*/
int main() {
    int N, M;
    int A[MAX_SIZE];

    // Read the value of N
    scanf("%d %d", &N, &M);

    // Read the array A
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    // Count the occurrence of each number from 1 to M in array A
    int count[M + 1];
    for (int i = 1; i <= M; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        if (A[i] >= 0 && A[i] <= M) {
            count[A[i]]++;
        }
    }
    // Print the occurrence count of each number from 1 to M
    for (int i = 1; i <= M; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}
