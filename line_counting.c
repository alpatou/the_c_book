#include <stdio.h>

main() {
  int c, nl, tabs, blanks;

  nl = 0;
  tabs = 0;
  blanks = 0;

  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
    else if (c == '\t')
      ++tabs;
    else if (c == ' ')
      ++blanks;

  printf("New lines are %d\n", nl);
  printf("Tabs are %d\n", tabs);
  printf("Blanks %d\n", blanks);
}
