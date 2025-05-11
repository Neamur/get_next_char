#include <getnextchar/getnextchar.h>
#include <stdio.h>

int main() {
  while (!feof(stdin)) {
    char c = get_next_char();

    printf("%c", c);
  }

  printf("\n");
}
