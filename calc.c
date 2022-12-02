#include <ctype.h>
#include <stdio.h>
#include <string.h>
void main() {
  char n[30], r[30];
  int i, v = 0, c = 0, d = 0, s = 0, sp = 0;
  puts("Enter string: ");
  fgets(n, 30, stdin);
  for (i = 0; n[i] != '\0'; i++) {
    r[i] = tolower(n[i]);
  }
  for (i = 0; r[i] != '\0'; i++) {

    if (isdigit(r[i])) {
      d = d + 1;
    } else if (isspace(r[i])) {
      s = s + 1;
    } else if (isalpha(r[i])) {
      if (r[i] == 'a' || n[i] == 'e' || r[i] == 'i' || r[i] == 'o' ||
          r[i] == 'u') {
        v = v + 1;
      } else {
        c = c + 1;
      }
    } else {
      sp = sp + 1;
    }
  }
  printf("Vowel=%d \nConst.=%d \nSpaces=%d \nDigit=%d \nSpecial=%d \n", v, c,
         s - 1, d, sp);
}
