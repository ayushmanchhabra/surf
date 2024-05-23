// Copyright (c) The Surf Authors

#include <stdio.h>

#include <curl/curl.h>

#include "http.h"

int surf::http::get(FILE *file, char uri[]) {
  CURL *curl;
  CURLcode res;

  curl = curl_easy_init();

  if (curl) {
    curl_easy_setopt(curl, CURLOPT_URL, uri);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, file);

    res = curl_easy_perform(curl);
    if (res != CURLE_OK) {
      fprintf(file, "HTTP GET request failed: %s\n", curl_easy_strerror(res));
    }
    curl_easy_cleanup(curl);
  }

  return 0;
}
