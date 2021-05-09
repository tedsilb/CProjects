load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

cc_binary(
    name = "fibonacci_calc",
    srcs = ["fibonacci_calc_main.cc"],
    deps = [
        ":fibonacci_calc_lib",
        "//third_party:absl_string_format",
        "//third_party:absl_strings",
    ],
)

cc_library(
    name = "fibonacci_calc_lib",
    srcs = ["fibonacci_calc.cc"],
    hdrs = ["fibonacci_calc.h"],
)

cc_test(
    name = "fibonacci_calc_test",
    size = "small",
    srcs = ["fibonacci_calc_test.cc"],
    deps = [
        ":fibonacci_calc_lib",
        "//third_party:googletest",
    ],
)
