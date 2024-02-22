#include <stdio.h>

int main() {
  int c[9];
  int flag, i;

  while (scanf ("%d", &c[8]) != EOF) {
    flag = 1;
    for (i = 7; i >= 0; --i)
      scanf ("%d", &c[i]);

    for (i = 8; i >= 0; --i) {
      if (c[i] == 0)
        continue;

      if (flag == 1) {
        flag = 0;
        if (c[i] < 0)
          printf ("-");
      } else {
        if (c[i] > 0)
          printf (" + ");
        else
          printf (" - ");
      }

      if (c[i] < 0)
        c[i] = -c[i];

      if (c[i] != 1 || i == 0)
        printf ("%d", c[i]);

      if (i >= 2)
        printf ("x^%d", i);
      else if (i == 1)
        printf ("x");
    }

    if (flag == 1)
      printf ("%d", c[0]);

    printf ("\n");
  }

  return 0;
}