#!/bin/bash
# Outputs the status code of an HTTP response
curl $1 -sI -w '%{response_code}\n' -o /dev/null
