#include <stdio.h>
#include <string.h>

int htoi(char s[]);

int main()
{
  char hex[100];
  int i = 0;

  while ((hex[i] = getchar()) != '\n' && hex[i] != EOF)
    i++;

  hex[i] = '\0'; // Null-terminate the string

  int result = htoi(hex);
  printf("Hex %s = Decimal %d\n", hex, result); // Should print 255
  return 0;
}

int htoi(char s[])
{
  int result = 0;
  int start = 0;
  int len = strlen(s);

  if (s[1] == 'x' || s[1] == 'X')
  {
    start = 2;
  }

  for (int i = start; i < len; i++)
  {
    result = result * 16; // Shift previous digits

    if (s[i] >= '0' && s[i] <= '9')
      result += s[i] - '0';
    else if (s[i] >= 'A' && s[i] <= 'F')
      result += s[i] - 'A' + 10;
    else if (s[i] >= 'a' && s[i] <= 'f')
      result += s[i] - 'a' + 10;
  }

  return result;
}