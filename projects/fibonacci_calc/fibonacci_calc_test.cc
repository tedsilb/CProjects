#include "fibonacci_calc.h"

#include <gtest/gtest.h>

// Handles 0 case correctly
TEST(FibonacciCalc, Case0) {
  long double expected = 0L;

  long double actual = FibonacciCalc::FibonacciGen(0);

  ASSERT_EQ(actual, expected);
}

// Handles 1 case correctly
TEST(FibonacciCalc, Case1) {
  long double expected = 1L;

  long double actual = FibonacciCalc::FibonacciGen(1);

  ASSERT_EQ(actual, expected);
}

// Handles 2 case correctly
TEST(FibonacciCalc, Case2) {
  long double expected = 1L;

  long double actual = FibonacciCalc::FibonacciGen(2);

  ASSERT_EQ(actual, expected);
}

// Handles 3 case correctly
TEST(FibonacciCalc, Case3) {
  long double expected = 2L;

  long double actual = FibonacciCalc::FibonacciGen(3);

  ASSERT_EQ(actual, expected);
}

// Handles 25 case correctly
TEST(FibonacciCalc, Case25) {
  long double expected = 75025L;

  long double actual = FibonacciCalc::FibonacciGen(25);

  ASSERT_EQ(actual, expected);
}

// Handles 44 case correctly
TEST(FibonacciCalc, Case44) {
  long double expected = 701408733L;

  long double actual = FibonacciCalc::FibonacciGen(44);

  ASSERT_EQ(actual, expected);
}
