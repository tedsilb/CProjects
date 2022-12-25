load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

RULES_CC_COMMIT = "8e2588f2e4b1791619862ceb64ecf4ccb2ea564a"

RULES_CC_SHA = "a0b09cd9dbd6efffd903240a1ee6d15c891a40624f6942b51fe30f8963d4b636"

ABSL_COMMIT = "5e4ea1ce097f3571e7d87af33b6b30d11b3a211e"

ABSL_SHA = "3943578b8cb4a356717ee1e9069f367e149e07792fbd6e2910415c55204eff30"

GOOGLETEST_COMMIT = "0320f517fd920866d918e564105d68fd4362040a"

GOOGLETEST_SHA = "df6cad4bf17df72d8d86306628701c01a45b9e001c7f2a3b28971c7e24b1035b"

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
