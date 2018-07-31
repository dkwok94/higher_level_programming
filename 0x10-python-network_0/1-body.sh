#!/bin/bash
# Sends a GET request to the URL and returns the body of the response only if it has a 200 status code
curl -w 'Route 2' -X GET $1 -sfo /dev/null
