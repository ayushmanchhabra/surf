// Copyright (c) The Surf Authors

#include <iostream>

#include "version.h"

#include "main.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: wn [--version] <path/to/script>");
  }
  if (argv[1] == std::string("--version")) {
    fprintf(stdout, "%s\n", (surf::version()).c_str());
  }
  return 0;
}