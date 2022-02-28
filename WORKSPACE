load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

RULES_PYTHON_VERSION = "0.6.0"

RULES_CC_COMMIT = "081771d4a0e9d7d3aa0eed2ef389fa4700dfb23e"

RULES_CC_SHA = "ff7876d80cd3f6b8c7a064bd9aa42a78e02096544cca2b22a9cf390a4397a53e"

ABSL_COMMIT = "5e4ea1ce097f3571e7d87af33b6b30d11b3a211e"

ABSL_SHA = "3943578b8cb4a356717ee1e9069f367e149e07792fbd6e2910415c55204eff30"

GOOGLETEST_COMMIT = "c9461a9b55ba954df0489bab6420eb297bed846b"

GOOGLETEST_SHA = "1cff5915c9dfbf8241d811e95230833c4f34a6d56b7b8c960f4c828f60429a38"

# This isn't used, but for some reason the build fails if this isn't loaded

http_archive(
    name = "rules_python",
    sha256 = "a30abdfc7126d497a7698c29c46ea9901c6392d6ed315171a6df5ce433aa4502",
    strip_prefix = "rules_python-%s" % RULES_PYTHON_VERSION,
    url = "https://github.com/bazelbuild/rules_python/archive/%s.tar.gz" % RULES_PYTHON_VERSION,
)

http_archive(
    name = "rules_cc",
    sha256 = RULES_CC_SHA,
    strip_prefix = "rules_cc-%s" % RULES_CC_COMMIT,
    urls = ["https://github.com/bazelbuild/rules_cc/archive/%s.tar.gz" % RULES_CC_COMMIT],
)

http_archive(
    name = "com_google_absl",
    sha256 = ABSL_SHA,
    strip_prefix = "abseil-cpp-%s" % ABSL_COMMIT,
    urls = ["https://github.com/abseil/abseil-cpp/archive/%s.zip" % ABSL_COMMIT],
)

http_archive(
    name = "com_google_googletest",
    sha256 = GOOGLETEST_SHA,
    strip_prefix = "googletest-%s" % GOOGLETEST_COMMIT,
    urls = ["https://github.com/google/googletest/archive/%s.zip" % GOOGLETEST_COMMIT],
)
