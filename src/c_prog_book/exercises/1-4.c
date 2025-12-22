/* Exercise 1-4 */
/* Temp Conversion calc celsius to farenheit  */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {

  int fahr;
  printf("Fahr\tCelsius\n");
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%6.1f\t%3d\n", (5.0/9.0)*(fahr-32), fahr);
}

