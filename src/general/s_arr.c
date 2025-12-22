#include <stdio.h>
#include <string.h>

#define SIZE 40

typedef struct {
  char *chars;
  int length;
} Range;

int move_pos(char* sh, char * str) {
  int pos;
  int x = 0;

  Range range = {
    .chars = str,
    .length = strlen(range.chars),
  };
  
  while (sh != NULL) 
    {
      //printf("Found at position- %ld\n", sh - str + 1);
      pos = sh - str + 1;
      //printf("POS: %d\n", pos);
      sh = strchr(sh + 1, ',');
      
      while (x < pos - 1) {
        //printf("Position: %d\n", pos);
        //printf("%c", str[x]);
        str = range.chars;
        x++;
      }

      printf("%c", range.chars[0]);

      x = pos;

      //
      //return pos;
  }
  return pos;

}


int main() {

  char str[] = "11-22,95-115";
  char *sh;
  sh = strchr(str, ',');
  printf("Searching for the character in ',' in the given string i.e. \"%s\"\n",
         str);

  move_pos(sh, str);

  return 0;
}
