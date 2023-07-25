/*You will be given a string S consisting of small alphabets, capital alphabets and spaces. 
You need to count number of small alphabets, capital alphabets and spaces in the string S.*/

#include <stdio.h>
#include <string.h>

int main() {
  char s[1001];
  fgets(s, 1001, stdin);
  int cap = 0, sml = 0, spc = -1;
  int len = strlen(s);

  for (int i = 0; i < len; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      cap++;
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      sml++;
    } else {
      spc++;
    }
  }

  printf("Capital - %d\n", cap);
  printf("Small - %d\n", sml);
  printf("Spaces - %d", spc);

  return 0;
}