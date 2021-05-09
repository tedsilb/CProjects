#include <cstdlib>
#include <iostream>

#include "absl/strings/numbers.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/str_format.h"
#include "fibonacci_calc.h"

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cout << "Missing n term. Pass your n term as the first argument."
              << std::endl;
    return 2;
  }

  absl::uint128 user_no;
  bool cast_success = absl::SimpleAtoi(std::string(argv[1]), &user_no);
  if (!cast_success) {
    std::cout << absl::StrFormat("Unable to parse n term. Provided: %s",
                                 argv[1])
              << std::endl;
    return 2;
  }

  long double fib_no = FibonacciCalc::FibonacciGen((int)user_no);
  if (fib_no == -1) {
    return 1;
  }

  std::cout << fib_no << std::endl;
  return 0;
}
