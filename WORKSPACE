load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

RULES_CC_COMMIT = "2f8c04c04462ab83c545ab14c0da68c3b4c96191"

RULES_CC_SHA = "4aeb102efbcfad509857d7cb9c5456731e8ce566bfbf2960286a2ec236796cc3"

ABSL_COMMIT = "5e4ea1ce097f3571e7d87af33b6b30d11b3a211e"

ABSL_SHA = "3943578b8cb4a356717ee1e9069f367e149e07792fbd6e2910415c55204eff30"

GOOGLETEST_COMMIT = "0320f517fd920866d918e564105d68fd4362040a"

GOOGLETEST_SHA = "df6cad4bf17df72d8d86306628701c01a45b9e001c7f2a3b28971c7e24b1035b"

# This isn't used, but for some reason the build fails if this isn't loaded

http_archive(
    name = "rules_python",
    sha256 = "a3a6e99f497be089f81ec082882e40246bfd435f52f4e82f37e89449b04573f6",
    strip_prefix = "rules_python-0.10.2",
    url = "https://github.com/bazelbuild/rules_python/archive/refs/tags/0.10.2.tar.gz",
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
