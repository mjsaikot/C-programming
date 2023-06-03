#include <stdio.h>

int main() {
    // Write C code here
    // char ar[5]={'S','A','I','K','O','T'};
    // char ar[6]="SAIKOT";
    /*If we use %s for print then we should always increase 1 for array/string 
    otherwise we don't need to fix array size, Because string always use null end of the char*/
    char ar[]="SAIKOT";
    // for(int i=0;i<6;i++){
    // printf("%c ", ar[i]);
    // }
    int sz=sizeof(ar)/sizeof(char);
    printf("%d\n", sz);
    printf("%s", ar);
    return 0;
}