#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case '\t':
      putchar('\\');
      c = 't';
      break;
      case '\b':
      putchar('\\');
      c = 'b';
      break;
      case '\\':
      putchar('\\');
      c = '\\';
      break;
    }
    putchar(c);
  }

  return 0;
}
