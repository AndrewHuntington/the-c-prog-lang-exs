#include <stdio.h>

// strcat: concatenate t to the end of s; s must be big enough
// void strcat(char s[], char t[])
// {
//   int i, j;

//   i = j = 0;
//   while (s[i] != '\0') // find end of s
//     i++;
//   while ((s[i++] = t[j++]) != '\0') // copy t
//     ;
// }

// pointer version
void strcatp(char *s, char *t)
{
  while (*s != '\0')
    s++;
  while ((*s++ = *t++) != '\0')
    ;
}

int main()
{
  char a[50] = "Hello,";
  char b[] = " World!";

  strcatp(a, b);

  printf("%s\n", a);
  return 0;
}