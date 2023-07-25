/*There are N army people standing in a line. Their major ordered 
them to make a line in asceding order according to their age. 
And then the major called the person stading in the middle. 
If there are two people in the middle then he will call both of them.
 Can you tell the age of the middle man or men?
Note: If N is odd then the middle person will be (N+1)/2 otherwise 
there will be two person in the middle, and they are (N/2) and (N/2)+1.*/

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &ar[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                int tmp = ar[i];
                ar[i] = ar[j];
                ar[j] = tmp;
            }
        }
    }
    int x,y;
    if(n%2==0)
    {
        x=n/2;
        y=(n/2)+1;
        printf("%d %d", ar[x-1],ar[y-1]);
    }
    else {
        x=(n+1)/2;
        printf("%d", ar[x-1]);
    }
   

    return 0;
}