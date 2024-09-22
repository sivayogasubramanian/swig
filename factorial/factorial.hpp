#ifndef FACTORIAL_HPP
#define FACTORIAL_HPP

class Factorial {
public:
  Factorial(int n) : n(n) {}
  int Calculate();

private:
  int n;
};

#endif // FACTORIAL_HPP
