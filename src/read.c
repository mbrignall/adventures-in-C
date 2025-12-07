/* read.c                                                */
/* Read file contents using CLI argument (filename)      */
/* Count lines, words and characters and display totals  */
/* Error if: no argument, no file to open. Close at end. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
      printf("Usage: %s <file_name>\n", argv[0]);
      return 1;
    }

    FILE *file;
    char ch;
    int lines = 0, words = 0, chars = 0, inWord = 0;

    file = fopen(argv[1], "r");

    if (file == NULL) {
      printf("Error: Could not open file %s.\n", argv[1]);
      return 1;
    }

    printf("File contents:\n\n");

    while ((ch = fgetc(file)) != EOF) {
      printf("%c", ch);
      chars++;
      if (ch == '\n') {
        lines++;
      }
      if (isspace(ch)) {
        inWord = 0;
      } else if (!inWord) {
        inWord = 1;
        words++;
      }
    }

    printf("\nLines: %d\nWords: %d\nCharacters: %d\n", lines, words, chars);

    fclose(file);

    return 0;
}
