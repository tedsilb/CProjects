#include <cstdlib>
#include <iostream>

long double FibonacciGen(int n_term) {
  if (n_term < 0) {
    return -1;
  }

  if (n_term == 0) {
    return 0;
  } else {
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
}

int main(int argc, char* argv[]) {
  if (argc < 2) {
    return 2;
  }

  int user_no = atoi(argv[1]);

  long double fib_no = FibonacciGen(user_no);
  if (fib_no == -1) {
    return 1;
  }

  std::cout << fib_no << std::endl;
  return 0;
}
