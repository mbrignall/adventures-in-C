// C program to create a typedef for a structure
#include <stdint.h>
#include <stdio.h>
#include <string.h>


// Defining the structure
typedef struct {
  char* chars;
  int32_t length;
} String;


int main() {

  FILE * fp;
  char * line = NULL;
  size_t len = 0;
  ssize_t read;
  fp = fopen("../inputs/file.txt", "r");

  if (fp == NULL) {
    printf("Error: Could not open file.\n");
    return 1;
  }
     while ((read = getline(&line, &len, fp)) != -1) {
       // Assigning values to the struct members
       String string = {
         .chars = line,
         .length = strlen(string.chars),
       };
       
       //string.chars = line;
       //string.length = strlen(string.chars);
       char n = '\n';
       
       for (int i = 0; i < string.length; i++) {
         if (string.chars[i] == ',') {
           string.chars[i] = n;
         }
         printf("%c", string.chars[i]);
       }
       //printf("%d", string.chars[0]);  
     }
}
