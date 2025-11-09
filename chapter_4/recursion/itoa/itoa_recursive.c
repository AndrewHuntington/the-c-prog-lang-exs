#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void itoa(int n, char s[]);
void itoa_r(int n, char s[]);
void reverse(char s[]);

int main()
{
  char buffer[20];
  char text[] = "abc";
  // itoa(-12345, buffer);
  // printf("%s\n", buffer);
  itoa_r(-12345, buffer);
  printf("%s\n", buffer);
  return 0;
}

// reverse: reverse string s in place
void reverse(char s[])
{
  int c, i, j;
  for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
  {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

// itoa: convert n to characters in s
void itoa(int n, char s[])
{
  int i, sign;

  if ((sign = n) < 0) // record sign
    n = -n;           // make n positive
  i = 0;
  do
  {                        // generate digits in reverse order
    s[i++] = n % 10 + '0'; // get next digit
  } while ((n /= 10) > 0); // delete it
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

// recursive itoa: convert n to characters in s
void itoa_r(int n, char s[])
{
  static int i;

  if (n / 10)
    itoa_r(n / 10, s);
  else
  {
    i = 0;
    if (n < 0)
      s[i++] = '-';
  }
  s[i++] = abs(n) % 10 + '0';
  s[i] = '\0';
}