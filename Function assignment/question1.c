/*Question: Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.*/

#include <stdio.h>
//my function no return+parameter
void my_abs(int x)
{
    
    if(x<0)
        {
           printf("%d", x*-1);
        }
        else {
            printf("%d", x);
        }   
}
//main function
int main() 
{
    int x;
    scanf("%d", &x);
    my_abs(x);
     
    return 0;
}