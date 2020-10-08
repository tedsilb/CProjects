# CProjects

Various C/C++ projects I work on from time to time.

## Building

Projects are built using [Bazel](https://bazel.build).

- To build all projects:
  - `bazel build ...`
- To run a specific project:
  - `bazel run projects/{project} {args}`
- For example:
  - `bazel run projects/fibonacci_calc 10`
