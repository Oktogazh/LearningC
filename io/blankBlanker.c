#include <stdio.h>

/* This version is not stack-friendly as C lacks Tail Call Optimisation
but I like it anyway.
Better practices over there:
https://penti.org/~sederlok/misc/lang/c/the_c_programming_language_-_exercises/krx109.html
*/

#define NB 0 /* Not Blank */

int iter(int current, int previous) /* previous == ' ' after the firstt itteration */
{
  if (current != ' ') {
    putchar(previous); /* id est: ' ' */
    return current;
  }
  else return iter(getchar(), current);
}

int main()
{
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ') c = iter(c, NB);
    putchar(c);
  }

  return 0;
}
