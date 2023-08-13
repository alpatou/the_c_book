#include <stdio.h>

int main() {

  long nc = 0; // we use long, allthoug it is an int, because in some machines
               // int is smaller.
  // we can also use double (double precision float)

  while (getchar() != EOF) {
    ++nc;
    printf("%ld\n", nc);
  }
  return 0;
}