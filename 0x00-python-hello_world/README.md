# 0x00. Python - Hello, World

## Overview
This project was a brief introduction to the Python programming language. Concepts included how to print text and variables using print, how to use strings, indexing and slicing in Python, and general background on higher-level programming.

## Requirements
### Python Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be interpreted/compiled on Ubuntu 14.04 LTS using `python3` (version 3.4.3)
* All your files should end with a new line
* The first line of all your files should be exactly `#!/usr/bin/python3`
* A `README.md` file, at the root of the folder of the project, is mandatory
* Your code should use the PEP 8 style (version 1.7.*)
* All your files must be executable
* The length of your files will be tested using `wc`

### Shell Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your scripts will be tested on Ubuntu 14.04 LTS
* All your scripts should be exactly two lines long (`wc -l` file should print 2)
* All your files should end with a new line
* The first line of all your files should be exactly `#!/bin/bash`
* All your files must be executable

### C Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags `-Wall -Werror -Wextra and -pedantic`
* All your files should end with a new line
* Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* You are not allowed to use global variables
* No more than 5 functions per file
* The prototypes of all your functions should be included in your header file called `lists.h`
* All your header files should be include guarded

## Tasks
### Mandatory
**[0-run](0-run)** - Runs a Python script via an environment variable `$PYFILE`

**[1-run_inline](1-run_inline)** - Runs Python code via an environment variable `$PYCODE`

**[2-print.py](2-print.py)** - Prints `\"Programming is like building a multilingual puzzle` followed by a new line using `print`

**[3-print_number.py](3-print_number.py)** - Complete the [source code](https://github.com/holbertonschool/0x00.py/blob/master/3-print_number.py) to print the integer stored in `number` followed by `Battery street`

**[4-print_float.py](4-print_float.py)** - Complete the [source code](https://github.com/holbertonschool/0x00.py/blob/master/4-print_float.py) to print the float stored in `number` to a precision of 2 digits

**[5-print_string.py](5-print_string.py)** - Complete the [source code](https://github.com/holbertonschool/0x00.py/blob/master/5-print_string.py) to print the string in `str` three times followed by its first 9 characters on a newline

**[6-concat.py](6-concat.py)** - Complete the [source code](https://github.com/holbertonschool/0x00.py/blob/master/6-concat.py) to print `Welcome to Holberton School!`

**[7-edges.py](7-edges.py)** - Complete the [source code](https://github.com/holbertonschool/0x00.py/blob/master/7-edges.py) to print the first 3 letters of `word`, the last 2 letters of `word`, and the value of `word` without the first and last characters, using only 8 lines of code maximum

**[8-concat_edges.py](8-concat_edges.py)** - Complete the [source code](https://github.com/holbertonschool/0x00.py/blob/master/8-concat_edges.py) to print `object-oriented programming with Python` followed by a new line

**[9-easter_egg.py](9-easter_egg.py)** - Python script that prints the \"Zen of Python\" followed by a new line

**[10-check_cycle.c](10-check_cycle.c)** - C program that identifies whether a linked list has a cycle or not

**[lists.h](lists.h)** - Header file for `10-check_cycle.c`

### Advanced

**[100-write.py](100-write.py)** - Prints `and that piece of art is useful - Dora Korpar, 2015-10-19` using `write` only and printing to the `stderr` with an exit code of `1`

**[101-compile](101-compile)** - Script that compiles a Python script file where the filename is stored in an environment variable `$PYFILE` and the output file is `$PYFILEc`

**[102-magic_calculation.py](102-magic_calculation.py)** - A translation of the following Python bytecode into Python code
```
  3           0 LOAD_CONST               1 (98)
              3 LOAD_FAST                0 (a)
              6 LOAD_FAST                1 (b)
              9 BINARY_POWER
             10 BINARY_ADD
             11 RETURN_VALUE
```