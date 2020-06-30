#include <iostream>
#include <ostream>

int main() {
  int* x = new int;
  *x = 999999999999;
  delete x;
  *x = 1;
  return 0;
}
