#include <stdio.h>

int main()
{
  int c, b, t, n;
  b = 0;
  t = 0;
  n = 0;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case ' ':
      ++b;
      break;
      case '\t':
      ++t;
      break;
      case '\n':
      ++n;
      break;
    }
    printf("%d blanks, %d tabs and %d newline characters have been used so far\n", b, t, n);
  }
  return 0;
}
