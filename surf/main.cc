// Copyright (c) The Surf Authors

#include <iostream>

#include "cli.h"
#include "http.h"
#include "main.h"
#include "version.h"

int main(int argc, char *argv[]) {
  if (surf::cli(argc, argv) == 0) {
    surf::http::get(stdout, argv[1]);
  }
  return 0;
}
