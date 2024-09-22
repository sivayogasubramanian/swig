#include "factorial.hpp"

int Factorial::Calculate() {
  if (n == 0 || n == 1) {
    return 1;
  }

  return n * Factorial(n - 1).Calculate();
}