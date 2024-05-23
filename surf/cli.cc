// Copyright (c) The Surf Authors

#include <iostream>
#include <unordered_map>

#include "cli.h"
#include "version.h"

int surf::cli(int argc, char *argv[]) {

  std::unordered_map<std::string, std::string> args;

  if (argc < 2) {
    fprintf(stderr, "Usage: wn <--version> [path/to/script]\n");
    return 2;
  }
  if (argv[1] == std::string("--version")) {
    fprintf(stdout, "%s\n", (surf::version()).c_str());
    return 1;
  }
  return 0;
}