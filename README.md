# CProjects

[![CI](https://github.com/tedsilb/CProjects/actions/workflows/main.yml/badge.svg)](https://github.com/tedsilb/CProjects/actions/workflows/main.yml)

[![CodeFactor](https://www.codefactor.io/repository/github/tedsilb/cprojects/badge)](https://www.codefactor.io/repository/github/tedsilb/cprojects)

Various C/C++ projects I work on from time to time.

## Building

Projects are built using [Bazel](https://bazel.build).

- To build all projects:
  - `bazel build ...`
- To run a specific project:
  - `bazel run projects/{project} {args}`
- For example:
  - `bazel run projects/fibonacci_calc 10`
