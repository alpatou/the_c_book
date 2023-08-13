#include <stdio.h>

int main() {

  double nc = 0; // we use long, allthoug it is an int, because in some machines
                 // int is smaller.
  // we can also use double (double precision float)

  for (nc = 0; getchar() != EOF; ++nc) {

    printf("%.0f\n", nc);
  }
  // empty body, null statement
  printf("%.0f\n", nc);
}