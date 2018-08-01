#!/bin/bash
# Outputs the status code of an HTTP response
curl $1 -s -w '%{http_code}\n' -o /dev/null
