#include <stdio.h>

int strend(char *s, char *t);

int main()
{
  int x = strend("the end", "end"); // true (1)
  int y = strend("the end", "xxx"); // false (0)

  printf("x: %d, y: %d\n", x, y);
  return 0;
}

// strend: returns 1 if the string t occurs are the end of string s, otherwise 0
int strend(char *s, char *t)
{
  char *bs = s; // remember beginning of strs
  char *bt = t;

  for (; *s; *s++) // end of str s
    ;
  for (; *t; *t++) // end of str t
    ;

  for (; *s == *t; s--, t--)
    if (t == bt || s == bs)
      break;

  if (*s == *t && t == bt && *s != '\0')
    return 1;
  else
    return 0;

  return 0;
}