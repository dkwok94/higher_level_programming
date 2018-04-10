#!/usr/bin/python3
for letter in range(ord('a'),ord('z')):
    if letter == ord('e') or letter == ord('q'):
        continue
    print(chr(letter), end='')
