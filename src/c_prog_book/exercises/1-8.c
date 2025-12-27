/* Count blanks, tabs and new lines */

#include <stdio.h>

int main() {

  int c, nl, b, t;
  nl = b = t = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++nl;      
    } else if (c == ' '){
      ++b;
    } else if (c == '\t'){
      ++t;
    }
  }
  
  printf("New Line: %d, Blanks: %d, Tabs: %d\n", nl, b, t);
  return 0;
}
