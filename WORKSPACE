load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

RULES_CC_COMMIT = "68cb652a71e7e7e2858c50593e5a9e3b94e5b9a9"

RULES_CC_SHA = "070e6220f6e695bb2e0d2f11ec8de137661d3700178cff13170c5aebed0b4f08"

ABSL_COMMIT = "0d5156018dd3d0d075cc14a0aa6078979c7a85d3"

ABSL_SHA = "6d79d0566956f01bd7c1a64947109f01bf0d3f041764e5b61674726db9a5f6b5"

GOOGLETEST_COMMIT = "a3460d1aeeaa43fdf137a6adefef10ba0b59fe4b"

GOOGLETEST_SHA = "d3d307a240e129bb57da8aae64f3b0099bf1b8efff7249df993b619b8641ec77"

# This isn't used, but for some reason the build fails if this isn't loaded

http_archive(
    name = "rules_python",
    sha256 = "778197e26c5fbeb07ac2a2c5ae405b30f6cb7ad1f5510ea6fdac03bded96cc6f",
    url = "https://github.com/bazelbuild/rules_python/releases/download/0.2.0/rules_python-0.2.0.tar.gz",
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
