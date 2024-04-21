// Copyright (c) The Surf Authors

#include <iostream>

#include "version.h"

std::string surf::version() {
  std::string x = std::to_string(SURF_MAJOR_VERSION);
  std::string y = std::to_string(SURF_MINOR_VERSION);
  std::string z = std::to_string(SURF_PATCH_VERSION);
  std::string v = "v" + x + "." + y + "." + z;
  return v;
}
