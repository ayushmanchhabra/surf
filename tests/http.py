# Copyright (c) The Surf Authors

import subprocess

def http_get():
    args = ("./out/surf", "https://example.com")
    popen = subprocess.Popen(args, stdout=subprocess.PIPE)
    popen.wait()
    return popen.stdout.read().decode("utf-8").strip()

def html_get():
    with open('./tests/http.html') as f:
        content = f.readlines()
    return ''.join(content).strip()

def test_http():
    assert http_get() == html_get()
