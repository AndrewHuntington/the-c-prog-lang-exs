#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300; floating-point version */
int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   // Lower limit of temperature table
  upper = 300; // Upper limit
  step = 20;   // Step size

  celsius = lower;
  printf("Celsius Fahrenheit\n");
  while (celsius <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%6.1f\t%3.0f\n", celsius, fahr);
    fahr = fahr + step;
  }
  return 0;
}