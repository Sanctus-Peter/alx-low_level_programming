# C-More functions, More nested loops

This is the fifth ALX low level programing task, it is basically a continuation of [C-Functions, nested loops](https://github.com/Sanctus-Peter/alx-low_level_programming/tree/main/0x02-functions_nested_loops). This tasks seeks to expand on [Function](https://www.geeksforgeeks.org/functions-in-c/) [declaration, definition, arguements](https://www.tutorialspoint.com/cprogramming/c_functions.htm), [prototypes](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/), [header](https://www.tutorialspoint.com/cprogramming/c_header_files.htm),[see also](https://www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/)  and  calling. [see also](https://www.youtube.com/watch?v=qMlnFwYdqIw) further explains the concept of [C library](https://www.geeksforgeeks.org/c-library-functions/) and finally, [nested loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss). At the end of this tasks, I now have a better understanding of the afore mentioned, along side the **gcc** flags **-Wall -Werror -pedantic -Wextra -std=gnu89**

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
### 0. [isupper](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/0-isupper.c)
#### Descriptions
Write a function that checks for uppercase character
- Prototype: **int _isupper(int c);**
- Returns 1 if c is uppercase
- Returns 0 othewise

#### [Header file](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/main.h)

### 1. [isdigit](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/1-isdigit.c)
#### Descriptions
Write a function that checks for digit
- Prototype: **int _isdigit(int c);**
- Returns 1 if c is digit
- Returns 0 othewise

### 2. [multiplication](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/2-mul.c)

### 3. [numbers](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/3-print_numbers.c)

### 4. [numbers excluding 2 and 4](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/4-print_most_numbers.c)

### 5. [10x number 0-14](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/5-more_numbers.c)

### 6. [Straight line](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/6-print_line.c)
#### Descriptions
Write a function that draws a straight line in the terminal.

- Prototype: **void print_line(int n);**
- You can only use **_putchar** function to print
- Where **n** is the number of times the character **_** should be printed
- The line should end with a **\n**
- If **n** is **0** or less, the function should only print **\n**

#### Sample call
```C
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
```

#### Output
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
$ ./6-lines | cat -e
$
__$
__________$
$

```

### 7. [Diagonal lines](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/7-print_diagonal.c)
#### Descriptions
Write a function that draws a diagonal line on the terminal.

- Prototype: **void print_diagonal(int n);**
- You can only use **_putchar** function to print
- Where **n** is the number of times the character **\** should be printed
- The diagonal should end with a **\n**
- If n is 0 or less, the function should only print a \n

### 8. [Squares of #](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/8-print_square.c)

### 9. [Fizz Buzz](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/9-fizz_buzz.c)
#### Descriptions
The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz. Each number or word should be separated by a space

### 10. [triangles of #](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/10-print_triangle.c)
#### Descriptions
Write a function that prints a triangle, followed by a new line.

- Prototype: **void print_triangle(int size);**
- You can only use **_putchar** function to print
- Where **size** is the size of the triangle
- If size is 0 or less, the function should print only a new line
- Use the character # to print the triangle

#### Expected Output if called with size = 10
```
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
```
### 11. [Largest prime factor](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/100-prime_factor.c)
#### Descriptions
The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.

Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.

- You are allowed to use the standard library
- Your program will be compiled with this command: 
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
```

### 12. [integer with putchar](https://github.com/Sanctus-Peter/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/101-print_number.c)
#### Descriptions
Write a function that prints an integer.

- Prototype: **void print_number(int n);**
- You can only use **_putchar** function to print
- You are not allowed to use **long**
- You are not allowed to use **arrays or pointers**
- You are not allowed to hard-code special values
