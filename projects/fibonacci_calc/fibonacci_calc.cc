#include "fibonacci_calc.h"

// Generate the nth term in the Fibonacci sequence.
long double FibonacciCalc::FibonacciGen(int n_term) {
  if (n_term < 0) {
    return -1;
  }
  if (n_term == 0) {
    return 0;
  }

  long double current_minus_two = 0;
  long double current_minus_one = 0;
  long double current = 1;

  for (int i = 1; i < n_term; i++) {
    current_minus_two = current_minus_one;
    current_minus_one = current;
    current = current_minus_two + current_minus_one;
  }

  return current;
}
