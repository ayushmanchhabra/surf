# Copyright (c) The Surf Authors

import subprocess

def get_version():
    args = ("./out/surf", "--version")
    popen = subprocess.Popen(args, stdout=subprocess.PIPE)
    popen.wait()
    return popen.stdout.read().decode("utf-8").strip()

def test_version():
    assert get_version() == "v0.0.0"
