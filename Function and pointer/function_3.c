#include <stdio.h>
//No return + No parameter
void sum(void)
{
    int a;
    scanf("%d", &a);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d", &ar[i]);
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ", ar[i]);
    }
}
int main() {
    //array output
    sum();
    

    return 0;
}