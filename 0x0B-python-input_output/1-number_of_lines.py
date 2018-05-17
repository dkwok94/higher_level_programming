#!/usr/bin/python3
def number_of_lines(filename=""):
    lines = 0
    with open(filename, encoding='utf-8') as f:
        for l in f:
            lines += 1
    return lines
