/*Question: Write a function named count_before_zero() which receives an array of integers and the size of that array and counts the number of elements in that array until you find zero
 and returns that count. Call that function in the main function and print the count there.*/
#include <stdio.h>

int main() {
    // Write C code here
    int n,count;
    scanf("%d", &n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &ar[i]);
    }
    count=0;
    int i = 0;
    while(ar[i]!=0)
    {
       i++;
       count++;
        
    }
    printf("%d", count);
    return 0;
}