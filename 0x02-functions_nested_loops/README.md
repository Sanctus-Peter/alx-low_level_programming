# C-Functions, nested loops

This is the third ALX low level programing task, This tasks seeks to inform on [Function](https://www.geeksforgeeks.org/functions-in-c/) [declaration, definition, arguements](https://www.tutorialspoint.com/cprogramming/c_functions.htm), [prototypes](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/), [header](https://www.tutorialspoint.com/cprogramming/c_header_files.htm),[see also](https://www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/)  and  calling. [see also](https://www.youtube.com/watch?v=qMlnFwYdqIw) further explains the concept of [C library](https://www.geeksforgeeks.org/c-library-functions/) and finally, [nested loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss). At the end of this tasks, I now have a better understanding of the afore mentioned along side the **gcc** flags **-Wall -Werror -pedantic -Wextra -std=gnu89**

## Tasks
for the following tasks I wasnt allowed to use the built in function in the C standard library. Example **printf, puts, putchar etc...**. A **_putchar** function was defined for us by ALX as seen below.
```C
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Thecharater to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
 int _putchar(char c)
 {
 	return (write(1, &c, 1));
 }
```

### 0. [_putchar](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/0-putchar.c)
#### Descriptions
Write a program that prints **_putchar**, followed by a new line, the program should return **0**

### 1. [alphabet](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/1-alphabet.c)
#### Descriptions
Write a function that prints the alphabet, in lowercase, followed by a new line
- Prototype: **void print_alphabet(void);**
- You can only use **_putchar** twice in the code
#### main.c file to call the prototype
```C
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    print_alphabet();
    return (0);
}
```
#### [header file](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/main.h)

#### Sample output
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
$ ./1-alphabet
abcdefghijklmnopqrstuvwxyz
$
```

### 2. [10x alphabeth](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/2-print_alphabet_x10.c)
#### Descriptions
Write a function that prints the alphabet, in lowercase, followed by a new line
- Prototype: **void print_alphabet_x10(void);**
- You can only use **_putchar** twice in the code
#### Sample output
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
$ ./2-alphabet_x10
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
$ 
```

### 3. [islower](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/3-islower.c)
#### Descriptions
Write a function that checks for lowercase character.
- Prototype: **int _islower(int c);**
- Returns 1 if c is lowercase
- Returns 0 otherwise

### 4. [isalpha](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/4-isalpha.c)
#### Descriptions
Write a function that checks for alphabetic character.
- Prototype: **int _isalpha(int c);**
- Returns 1 if c is a letter, lowercase or uppercase
- Returns 0 otherwise

### 5. [sign](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/5-sign.c)
#### Descriptions
Write a function that prints the sign of a number.
- Prototype: **int print_sign(int n);**
- Returns 1 and prints + if n is greater than zero
- Returns 0 and prints 0 if n is zero
- Returns -1 and prints - if n is less than zero

### 6. [absolute](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/6-abs.c)
#### Descriptions
Write a function that computes the absolute value of an integer.
- Prototype: **int _abs(int);**

### 7. [Last digit](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/7-print_last_digit.c)
#### Descriptions
Write a function that prints the last digit of a number.
- Prototype: **int print_last_digit(int n);
- Returns the value of the last digit

### 8. [Jack Bauer](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/8-24_hours.c)
#### Descriptions
Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
- Prototype: **void jack_bauer(void);**

### 9. [Times table](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/9-times_table.c)
#### Descriptions
Write a function that print the 9 times table starting with 0.
- Prototype: **void times_table(void);**
- Format: see example
#### Expected output
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
$
$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
$
```

### 10. [Add](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/10-add.c)
#### Description
Write a function that adds two integers and return the result.
- Prototype: **int add(int, int)**

### 11. [Natural number to 98](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/11-print_to_98.c)
[Alternative solution](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/111-print_to_98.c)
#### Descriptions
Write a function that prints all natural numbers from **n** to **98**, followed by a new line.
- Prototype: **void print_to_98(int n);**
- Numbers must be separated by a comma, followed by a space
- Numbers should be printed in order
- The first printed number should be the number passed to the function
- The last printed number should be **98**
- You are allowed to use the standard library

### 12. [Multiplication table](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/100-times_table.c)
#### Descriptions
Write a function that print the n times table starting with 0.
- Prototype: **void print_times_table(int n)
- if **n** is greater than **15** or less than **0** then the function should not print anything
- Format: see example for n = 3, 5, 98, 12
#### Expected output
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table
$ ./100-times_table 
0,   0,   0,   0
0,   1,   2,   3
0,   2,   4,   6
0,   3,   6,   9

0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5
0,   2,   4,   6,   8,  10
0,   3,   6,   9,  12,  15
0,   4,   8,  12,  16,  20
0,   5,  10,  15,  20,  25


0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
$ ./100-times_table | tr ' ' . | cat -e
0,...0,...0,...0$
0,...1,...2,...3$
0,...2,...4,...6$
0,...3,...6,...9$
$
0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5$
0,...2,...4,...6,...8,..10$
0,...3,...6,...9,..12,..15$
0,...4,...8,..12,..16,..20$
0,...5,..10,..15,..20,..25$
$
$
0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5,...6,...7,...8,...9,..10,..11,..12$
0,...2,...4,...6,...8,..10,..12,..14,..16,..18,..20,..22,..24$
0,...3,...6,...9,..12,..15,..18,..21,..24,..27,..30,..33,..36$
0,...4,...8,..12,..16,..20,..24,..28,..32,..36,..40,..44,..48$
0,...5,..10,..15,..20,..25,..30,..35,..40,..45,..50,..55,..60$
0,...6,..12,..18,..24,..30,..36,..42,..48,..54,..60,..66,..72$
0,...7,..14,..21,..28,..35,..42,..49,..56,..63,..70,..77,..84$
0,...8,..16,..24,..32,..40,..48,..56,..64,..72,..80,..88,..96$
0,...9,..18,..27,..36,..45,..54,..63,..72,..81,..90,..99,.108$
0,..10,..20,..30,..40,..50,..60,..70,..80,..90,.100,.110,.120$
0,..11,..22,..33,..44,..55,..66,..77,..88,..99,.110,.121,.132$
0,..12,..24,..36,..48,..60,..72,..84,..96,.108,.120,.132,.144$
$
```

### 13. [Multiples of 3 and 5](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/101-natural.c)
#### Descriptions
The natural numbers below 10 that are multiples of 3 or 5, are 3, 5, 6, and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.

### 14. [Fibonacci number](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/102-fibonacci.c)
#### Descriptions
Write a program that prints the first 50 [fibonacci number](https://en.wikipedia.org/wiki/Fibonacci_number), starting with 1 and 2, followed by a new line.
- The numbers must be seperated by comma, followed by space
- You are allowed to use the standard library

### 15. [Even Liber Abbaci](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x02-functions_nested_loops/103-fibonacci.c)
#### Descriptions
Even new term in the fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
