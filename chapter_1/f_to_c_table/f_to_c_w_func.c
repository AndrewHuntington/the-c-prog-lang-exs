#include <stdio.h>

#define LOWER 0   // Lower limit of temperature table
#define UPPER 300 // Upper limit
#define STEP 20   // Step size

int loop_work(float fahr, float celsius);

int main()
{
  float fahr, celsius;

  fahr = LOWER;
  printf("Fahrenheit Celsius\n");
  while (fahr <= UPPER)
  {
    fahr = loop_work(fahr, celsius);
  }
  return 0;
}

int loop_work(float fahr, float celsius)
{
  celsius = (5.0 / 9.0) * (fahr - 32.0);
  printf("%3.0f %13.1f\n", fahr, celsius);
  return fahr + STEP;
}