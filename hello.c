#include <stdio.h>

// for far=hr = 0, 20, ... , 300

main() {

  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
    c = getchar();
  }
}