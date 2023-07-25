/*Given the sum of four numbers and three of those numbers, find the missing number. 
All four numbers are positive integers.
The first line will contain T, number of test cases.
For every test case, the input will contain one integer S 
(the sum of the four numbers), A, B, C (three of those four numbers).*/

#include <stdio.h>
 int main()
 {
     int n,a,b,c,d;
     scanf("%d", &n);
     for(int i=0;i<n;i++)
     {
        
        scanf("%d %d %d %d", &a,&b,&c,&d);
        int sum = b+c+d;
        int result = a - sum;
        printf("%d\n", result);
     }

     return 0;
 }