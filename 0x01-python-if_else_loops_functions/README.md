# 0x01. Python - if/else, loops, functions

## Overview
This project introduced us to how to use various conditionals and loops in Python including `if`, `if...else`, `while`, `for`, `break`, `continue`, `pass`, `range`, and `return`. It also introduced us to variable scope and basic arithmetic operators.

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
**[0-positive_or_negative.py](0-positive_or_negative.py)** - This program will assign a random number to variable `number` using the following [source code](https://intranet.hbtn.io/rltoken/2S3G4vOnRrWymCjKYd6Wew). The output to be printed would be the number followed by:
* `is positive` if the number is greater than 0
* `is zero` if the number is 0
* `is negative` if the number is less than 0

**[1-last_digit.py](1-last_digit.py)** - This program will assign a random number to variable `number` using the following [source code](https://intranet.hbtn.io/rltoken/e9k9---MJXcMmIjlMdlBpw). The output of the program will be:
* `Last digit of` followed by:
  * The number
  * The string `is`
  * `and is greater than 5` if the number is greater than 5
  * `and is 0` if the number is 0
  * `and is less than 6 and not 0` if the string is less than 6 and not 0

**[2-print_alphabet.py](2-print_alphabet.py)** - Prints the lowercase alphabet not followed by a newline using:
* one loop
* `print` once
* no characters stored in variables
* no imported modules

**[3-print_alphabt.py](3-print_alphabt.py)** - Prints the alphabet in lowercase not followed by a new line
* Print all letters except `q` and `e`
* `print` once
* one loop
* no characters stored in variables
* no imported modules

**[4-print_hexa.py](4-print_hexa.py)** - Prints all numbers from 0 to 98 in decimal and in hexadecimal
* `print` once
* one loop
* no characters or numbers stored in variables
* no imported modules

**[5-print_comb2.py](5-print_comb2.py)** - Prints the numbers from 0 to 99
* numbers separated by commas and a space
* numbers printed in ascending order with two digits
* last number followed by new line
*`print` twice
* one loop
* no stored numbers or strings in variables
* no imported modules

**[6-print_comb3.py](6-print_comb3.py)** - Prints all possible different combinations of two digits
* numbers separated by commas and a space
* two digits must be different
* the smallest combination of two digits is the one printed
* numbers printed in ascending order with two digits
* last number followed by a new line
* `print` three times
* 2 loops
* no stored values in variables
* no imported modules

**[7-islower.py](7-islower.py)** - Checks if a character is lowercase
* returns `True` if it is lowercase
* returns `False` otherwise
* no imported modules
* cannot use `str.upper()` and `str.isupper()`

**[8-uppercase.py](8-uppercase.py)** - Prints a string in uppercase
* `print` twice
* one loop
* no imported modules
* cannot use `str.upper()` or `str.isupper()`

**[9-print_last_digit.py](9-print_last_digit.py)** - Prints the last digit of a number and returns the last digit
* no imported modules

**[10-add.py](10-add.py)** - Adds two integers and returns the result
* no imported modules

**[11-pow.py](11-pow.py)** - Computes the power of two integers and returns the result
* no imported modules

**[12-fizzbuzz.py](12-fizzbuzz.py)** - Prints the numbers 1 to 100 separated by spaces using `FizzBuzz` rules
* numbers which are multiples of 3 - print `Fizz`
* numbers which are multiples of 5 - print `Buzz`
* numbers which are multiples of 3 and 5 - print `FizzBuzz`

**[13-insert_number.c](13-insert_number.c)** - Inserts a number into a sorted linked list

**[lists.h](lists.h)** - the header file for 13-insert_number.c

### Advanced
**[100-print_tebahpla.py](100-print_tebahpla.py)** - prints the alphabet in reverse order, alternating lowercase and uppercase
* `print` once
* one loop
* no stored characters in variables
* no imported modules

**[101-remove_char_at.py](101-remove_char_at.py)** - Creates a copy of the string and removes a character at a specified position

**[102-magic_calculation.py](102-magic_calculation.py)** - Translation of the following Python bytecode into a Python script
```
  3           0 LOAD_FAST                0 (a)
              3 LOAD_FAST                1 (b)
              6 COMPARE_OP               0 (<)
              9 POP_JUMP_IF_FALSE       16

  4          12 LOAD_FAST                2 (c)
             15 RETURN_VALUE

  5     >>   16 LOAD_FAST                2 (c)
             19 LOAD_FAST                1 (b)
             22 COMPARE_OP               4 (>)
             25 POP_JUMP_IF_FALSE       36

  6          28 LOAD_FAST                0 (a)
             31 LOAD_FAST                1 (b)
             34 BINARY_ADD
             35 RETURN_VALUE

  7     >>   36 LOAD_FAST                0 (a)
             39 LOAD_FAST                1 (b)
             42 BINARY_MULTIPLY
             43 LOAD_FAST                2 (c)
             46 BINARY_SUBTRACT
             47 RETURN_VALUE
```