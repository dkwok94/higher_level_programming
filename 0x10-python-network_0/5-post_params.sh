#!/bin/bash
# Sends a POST request to the URL with certain variables
curl $1 -s -X POST -d "email=hr%40holbertonschool%2E&subject=I%20will%20always%20be%20here%20for%20PLD"
