#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  printf("C17 Language Standard Limits:\n");
  printf("CHAR_BIT: %d\n", CHAR_BIT);
  printf("SCHAR_MIN: %d\n", SCHAR_MIN);
  printf("SCHAR_MAX: %d\n", SCHAR_MAX);
  printf("UCHAR_MAX: %u\n", UCHAR_MAX);
  printf("CHAR_MIN: %d\n", CHAR_MIN);
  printf("CHAR_MAX: %d\n", CHAR_MAX);
  printf("SHRT_MIN: %d\n", SHRT_MIN);
  printf("SHRT_MAX: %d\n", SHRT_MAX);
  printf("USHRT_MAX: %u\n", USHRT_MAX);
  printf("INT_MIN: %d\n", INT_MIN);
  printf("INT_MAX: %d\n", INT_MAX);
  printf("UINT_MAX: %u\n", UINT_MAX);
  printf("LONG_MIN: %ld\n", LONG_MIN);
  printf("LONG_MAX: %ld\n", LONG_MAX);
  printf("ULONG_MAX: %lu\n", ULONG_MAX);
  printf("FLOAT_MIN: %e\n", FLT_MIN);
  printf("FLOAT_MAX: %e\n", FLT_MAX);
  printf("DOUBLE_MIN: %e\n", DBL_MIN);
  printf("DOUBLE_MAX: %e\n", DBL_MAX);
  return 0;
}