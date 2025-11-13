#include <stdio.h>
#include <ctype.h>

int getch(void);
void ungetch(int);
int getint(int *);

int main(void)
{
  int n, ret;

  printf("Enter an integer: ");
  ret = getint(&n);
  if (ret != 0)
    printf("You entered: %d\n", n);
  else
    printf("No valid integer found.\n");

  return 0;
}

// getint: get next integer from input into *pn
int getint(int *pn)
{
  int c, sign;

  while (isspace(c = getch())) // skip white space
    ;

  if (!isdigit(c) && c != EOF && c != 'x' && c != '-')
  {
    ungetch(c); // it's not a number
    return 0;
  }

  sign = (c == '-') ? -1 : 1;
  if (c == '+' || c == '-')
    c = getch();
  for (*pn = 0; isdigit(c); c = getch())
    *pn = 10 * *pn + (c - '0');
  *pn *= sign;
  if (c != EOF)
    ungetch(c);

  return c;
}

#define BUFSIZE 100

static char buf[BUFSIZE]; // buffer for ungetch
static int bufp = 0;      // next free position in buf

// getch: get a (possibly pushed back) character
int getch(void)
{
  return (bufp > 0) ? buf[--bufp] : getchar();
}

// ungetch: push character back on input
void ungetch(int c)
{
  if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}