// Copyright (c) The Surf Authors

#ifndef _SURF_HTTP_H_
#define _SURF_HTTP_H_

#include <curl/curl.h>

namespace surf {
namespace http {
int get(FILE *file, char uri[]);
} // namespace http
} // namespace surf

#endif // _SURF_HTTP_H_
