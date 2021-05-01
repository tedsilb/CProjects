load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# This isn't used, but for some reason the build fails if this isn't loaded

http_archive(
    name = "rules_python",
    sha256 = "778197e26c5fbeb07ac2a2c5ae405b30f6cb7ad1f5510ea6fdac03bded96cc6f",
    url = "https://github.com/bazelbuild/rules_python/releases/download/0.2.0/rules_python-0.2.0.tar.gz",
)

http_archive(
    name = "rules_cc",
    sha256 = "3057c13fa4d431eb0e7a9c28eea13f25987d29f869406b5ee3f2bd9c4134cb0c",
    strip_prefix = "rules_cc-262ebec3c2296296526740db4aefce68c80de7fa",
    urls = ["https://github.com/bazelbuild/rules_cc/archive/262ebec3c2296296526740db4aefce68c80de7fa.tar.gz"],
)
