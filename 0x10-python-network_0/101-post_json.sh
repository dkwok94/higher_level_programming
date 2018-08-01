#!/bin/bash
# Sends a POST request to a URL with the contents of a JSON file
curl $1 -X POST -H "Content-Type: application/json" -d @$2
