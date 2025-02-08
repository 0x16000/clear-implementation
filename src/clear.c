#include <printf.h>

void clear() {
  printf("\033[H\033[J");
}

int main() {
  clear();
  return 0;
}
