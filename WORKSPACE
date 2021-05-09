load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

RULES_CC_COMMIT = "262ebec3c2296296526740db4aefce68c80de7fa"

RULES_CC_SHA = "3057c13fa4d431eb0e7a9c28eea13f25987d29f869406b5ee3f2bd9c4134cb0c"

ABSL_COMMIT = "e1d388e7e74803050423d035e4374131b9b57919"

ABSL_SHA = "baebd1536bec56ae7d7c060c20c01af89ecba2c0b1bc8992b652520655395f94"

GOOGLETEST_COMMIT = "011959aafddcd30611003de96cfd8d7a7685c700"

GOOGLETEST_SHA = "6a5d7d63cd6e0ad2a7130471105a3b83799a7a2b14ef7ec8d742b54f01a4833c"

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
