#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main()
{
  char text[] = "abc";

  reverse(text);
  printf("%s\n", text);
  return 0;
}

void reverse(char s[])
{
  void reverse_r(char s[], int i, int len);

  reverse_r(s, 0, strlen(s));
}

// recursive reverse: reverse string s in place
void reverse_r(char s[], int i, int len)
{
  int c, j;

  j = len - (i + 1);
  if (i < j)
  {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
    reverse_r(s, ++i, len);
  }
}