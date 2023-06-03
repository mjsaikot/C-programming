#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    
    return 1; // Palindrome
}

int main() {
    char str[100];
    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    if (isPalindrome(str)) {
        printf(" Palindrome.\n");
    } else {
        printf("%s Not Palindrome.\n", str);
    }
    
    return 0;
}
