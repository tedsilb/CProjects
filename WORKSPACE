load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

RULES_CC_COMMIT = "daf6ace7cfeacd6a83e9ff2ed659f416537b6c74"

RULES_CC_SHA = "34b2ebd4f4289ebbc27c7a0d854dcd510160109bb0194c0ba331c9656ffcb556"

ABSL_COMMIT = "33541e751039a8c4bd3a395dd1a3a0928885814a"

ABSL_SHA = "2af5b1a55343d348c96c3b9c9d9a57a247ade86141a9a5f752779ea9abe15af4"

GOOGLETEST_COMMIT = "8d51ffdfab10b3fba636ae69bc03da4b54f8c235"

GOOGLETEST_SHA = "12ef65654dc01ab40f6f33f9d02c04f2097d2cd9fbe48dc6001b29543583b0ad"

# This isn't used, but for some reason the build fails if this isn't loaded

http_archive(
    name = "rules_python",
    sha256 = "934c9ceb552e84577b0faf1e5a2f0450314985b4d8712b2b70717dc679fdc01b",
    url = "https://github.com/bazelbuild/rules_python/releases/download/0.3.0/rules_python-0.3.0.tar.gz",
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
