/*Write a function named count_before_zero() which receives an array of integers and the
size of that array and counts the number of elements in that array until you find zero and 
returns that count. Call that function in the main function and print the count there.*/
#include <stdio.h>
// my function
int count_before_zero(int n,int ar[])
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        //condition
        if(ar[i] == 0)
        {
            break;
        }
        else{
            count++;
        }
    }
    return count;
}
//main function
int main()
{
    int n;
    // int count;
    scanf("%d", &n);
    int ar[n];
    //array input
    for(int i=0;i<n;i++)
    {
        scanf("%d", &ar[i]);
    }
    //function calling
    int count = count_before_zero(n,ar);
    printf("%d", count);

    return 0;
}