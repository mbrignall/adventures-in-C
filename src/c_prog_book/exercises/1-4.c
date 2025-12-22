/* Exercise 1-4 */
/* Temp Conversion calc celsius to farenheit  */

#include <stdio.h>

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Celsius\tFahr\n");
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%6.1f\t%3.0f\n", celsius, fahr);
    fahr = fahr + step;
  }
}

